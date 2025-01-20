ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif


################# 一些选项和定义 ###########################################
WORK_DIR = /home/furiosa/ysyx-workbench/npc

VERILATOR_FLAGS += -cc --exe --build --Wall -MMD --trace
VERILATOR_FLAGS += -x-assign fast
#VERILATOR_FLAGS += --assert
#VERILATOR_FLAGS += --coverage
VERILATOR_FLAGS += --debug --gdbbt
VERILATOR_FLAGS += --top-module ysyx_24080018_cpu -Icsrc

CXXFLAGS += -g

# Input files for Verilator
CXX_SRC += $(wildcard $(WORK_DIR)/csrc/*.cpp)
CXX_SRC += $(wildcard $(WORK_DIR)/csrc/sdb/*.cpp)
CXX_DEP = $(wildcard $(WORK_DIR)/csrc/*.h)
V_SRC   = $(wildcard $(WORK_DIR)/vsrc/*.v)

################# 构建依赖项 ################################################
default: run

run: obj_dir/Vysyx_24080018_cpu
	@echo "-- RUNNING  ---------------"
	obj_dir/Vysyx_24080018_cpu $(NPC_BIN) 
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"

obj_dir/Vysyx_24080018_cpu: $(CXX_SRC) $(V_SRC)
	@echo "-- VERILATE ---------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(CXX_SRC) $(V_SRC) --CFLAGS "$(CXXFLAGS)"
	$(MAKE) -C obj_dir -f Vysyx_24080018_cpu.mk $(LDLIBS)

-include $(CXX_DRP:.h=.d)
