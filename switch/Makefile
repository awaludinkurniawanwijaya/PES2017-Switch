.SUFFIXES:

ifeq ($(strip $(DEVKITPRO)),)
$(error "Please set DEVKITPRO in your environment")
endif

TOPDIR ?= $(CURDIR)
include $(DEVKITPRO)/libnx/switch_rules

TARGET := pes2017-switch-bootstrap
BUILD := build
SOURCES := source
DATA :=
INCLUDES := include

APP_TITLE := PES 2017 Switch Bootstrap
APP_AUTHOR := PES2017-Switch contributors
APP_VERSION := 0.1.0

ARCH := -march=armv8-a+crc+crypto -mtune=cortex-a57 -mtp=soft -fPIE
CFLAGS := -g -Wall -Wextra -O2 -ffunction-sections $(ARCH) $(DEFINES)
CFLAGS += $(INCLUDE) -D__SWITCH__
CXXFLAGS := $(CFLAGS) -fno-rtti -fno-exceptions
ASFLAGS := -g $(ARCH)
LDFLAGS = -specs=$(DEVKITPRO)/libnx/switch.specs -g $(ARCH) -Wl,-Map,$(notdir $*.map)
LIBS := -lnx
LIBDIRS := $(PORTLIBS) $(LIBNX)

ifneq ($(BUILD),$(notdir $(CURDIR)))
export OUTPUT := $(CURDIR)/$(TARGET)
export TOPDIR := $(CURDIR)
export VPATH := $(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) $(foreach dir,$(DATA),$(CURDIR)/$(dir)) $(TOPDIR)/../runtime/switch
export DEPSDIR := $(CURDIR)/$(BUILD)

CFILES := $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CPPFILES := $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp))) $(notdir $(wildcard $(TOPDIR)/../runtime/switch/*.cpp))
SFILES := $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.s)))
BINFILES := $(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.*)))

ifeq ($(strip $(CPPFILES)),)
export LD := $(CC)
else
export LD := $(CXX)
endif

export OFILES_BIN := $(addsuffix .o,$(BINFILES))
export OFILES_SRC := $(CPPFILES:.cpp=.o) $(CFILES:.c=.o) $(SFILES:.s=.o)
export OFILES := $(OFILES_BIN) $(OFILES_SRC)
export HFILES_BIN := $(addsuffix .h,$(subst .,_,$(BINFILES)))
export INCLUDE := $(foreach dir,$(INCLUDES),-I$(CURDIR)/$(dir)) $(foreach dir,$(LIBDIRS),-I$(dir)/include) -I$(CURDIR)/$(BUILD)
export LIBPATHS := $(foreach dir,$(LIBDIRS),-L$(dir)/lib)

ifeq ($(strip $(NO_ICON)),)
export NROFLAGS += --icon=$(LIBNX)/default_icon.jpg
endif
ifeq ($(strip $(NO_NACP)),)
export NROFLAGS += --nacp=$(CURDIR)/$(TARGET).nacp
endif

.PHONY: all clean $(BUILD)
all: check-runtime-input check-runtime-install check-runtime-audio check-runtime-crash check-runtime-stutters $(BUILD)

# Compile the SD-card install/discovery path with the Switch compiler. This
# source has no generated PPC dependency and catches Switch filesystem API
# and standard-library portability errors in CI.
.PHONY: check-runtime-install
check-runtime-install:
	$(CXX) -std=gnu++20 -D__SWITCH__ -DPES17_XEX_SHA256_SP='"0000000000000000000000000000000000000000000000000000000000000000"' -DPES17_XEX_SHA256_MP='"0000000000000000000000000000000000000000000000000000000000000000"' -I$(TOPDIR)/../runtime -I$(CURDIR)/include -I$(LIBNX)/include -include cstdint -fsyntax-only $(TOPDIR)/../runtime/install/install.cpp

.PHONY: check-runtime-audio
check-runtime-audio:
	$(CXX) -std=gnu++20 -D__SWITCH__ -I$(TOPDIR)/../runtime -I$(CURDIR)/include -I$(LIBNX)/include -include cstdint -fsyntax-only $(TOPDIR)/../runtime/switch/audio.cpp

# Compile the actual guest XInput bridge with the Switch compiler as a
# syntax-only gate. The bootstrap NRO does not yet link the full game runtime.
.PHONY: check-runtime-stutters
check-runtime-stutters:
	$(CXX) -std=gnu++20 -D__SWITCH__ -DPES17_DIAGNOSTICS=1 -I$(TOPDIR)/../runtime -I$(CURDIR)/include -I$(LIBNX)/include -include cstdint -fsyntax-only $(TOPDIR)/../runtime/stutters.cpp

.PHONY: check-runtime-crash
check-runtime-crash:
	$(CXX) -std=gnu++20 -D__SWITCH__ -I$(TOPDIR)/../runtime -I$(CURDIR)/include -I$(LIBNX)/include -include cstdint -fsyntax-only $(TOPDIR)/../runtime/crash.cpp

.PHONY: check-runtime-input
check-runtime-input:
	@if test -f "$(TOPDIR)/../ppc/ppc_recomp_shared.h"; then \
	  $(CXX) -std=gnu++20 -D__SWITCH__ -I$(TOPDIR)/../runtime -I$(TOPDIR)/../ppc -I$(CURDIR)/include -I$(LIBNX)/include -include cstdint -fsyntax-only $(TOPDIR)/../runtime/kernel/input.cpp; \
	else \
	  echo "SKIP: runtime XInput syntax check needs generated ppc/ppc_recomp_shared.h (game build output is not committed)"; \
	fi

$(BUILD):
	@mkdir -p $@
	@$(MAKE) --no-print-directory -C $(BUILD) -f $(CURDIR)/Makefile

clean:
	@rm -rf $(BUILD) $(TARGET).nro $(TARGET).nacp $(TARGET).elf

else
.PHONY: all
DEPENDS := $(OFILES:.o=.d)

ifeq ($(strip $(NO_NACP)),)
all: $(OUTPUT).nro
$(OUTPUT).nro: $(OUTPUT).elf $(OUTPUT).nacp
else
all: $(OUTPUT).nro
$(OUTPUT).nro: $(OUTPUT).elf
endif

$(OUTPUT).elf: $(OFILES)
$(OFILES_SRC): $(HFILES_BIN)

-include $(DEPENDS)
endif
