import importlib.util
import unittest
from pathlib import Path

MODULE_PATH = Path(__file__).resolve().parents[1] / "tools" / "verify_xex.py"
SPEC = importlib.util.spec_from_file_location("verify_xex", MODULE_PATH)
verify_xex = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(verify_xex)


def make_xex(title_id=0x4A3007D1, version=0x12):
    data = bytearray(0x40)
    data[:4] = b"XEX2"
    data[0x14:0x18] = (1).to_bytes(4, "big")
    data[0x18:0x1C] = (0x00040006).to_bytes(4, "big")
    data[0x1C:0x20] = (0x20).to_bytes(4, "big")
    data[0x24:0x28] = version.to_bytes(4, "big")
    data[0x2C:0x30] = title_id.to_bytes(4, "big")
    return bytes(data)


class XexVersionTest(unittest.TestCase):
    def test_reads_pes_2017_version_12(self):
        self.assertEqual(verify_xex.read_xex_info(make_xex()), (0x4A3007D1, 0x12))

    def test_does_not_assume_version_0a(self):
        self.assertEqual(verify_xex.read_xex_info(make_xex(version=0x0A))[1], 0x0A)

    def test_rejects_non_xex(self):
        with self.assertRaisesRegex(ValueError, "not an XEX2"):
            verify_xex.read_xex_info(b"not an executable")

    def test_rejects_missing_execution_info(self):
        data = bytearray(make_xex())
        data[0x18:0x1C] = (0x000003FF).to_bytes(4, "big")
        with self.assertRaisesRegex(ValueError, "execution-info"):
            verify_xex.read_xex_info(bytes(data))


if __name__ == "__main__":
    unittest.main()
