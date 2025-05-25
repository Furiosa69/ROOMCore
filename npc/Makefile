ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

TOP_MODULE := top
OBJ_DIR := ./obj_dir

VERILATOR_FLAGS += -cc --exe --build --Wall -MMD --trace
VERILATOR_FLAGS += -x-assign fast
VERILATOR_FLAGS += --top-module $(TOP_MODULE)\
                  -I$(NPC_HOME)/vsrc 

CXXFLAGS += -g $(shell llvm-config --cxxflags | sed 's/-D__STDC_[A-Z_]*//g') -fPIE \
            -I$(NPC_HOME)/csrc/include \
            -I$(NPC_HOME)/csrc/mem \
            -I$(NPC_HOME)/csrc/sim \
						-I$(OBJ_DIR) \
            -I/usr/local/share/verilator/include

CFLAGS += -Wall -O2 -I$(NPC_HOME)/csrc

LIBS += $(shell llvm-config --libs all) -lpthread -lrt -ldl -latomic

CXX_SRC := $(shell find $(NPC_HOME)/csrc -name "*.cpp")
V_SRC   := $(shell find $(NPC_HOME)/vsrc -name "*.v")

RUN_FLAGS := ${IMG} 

BIN  		 := $(OBJ_DIR)/V$(TOP_MODULE) 
NPC_EXEC := ${BIN} ${RUN_FLAGS}

default: run

run: obj_dir/Vtop
	@echo "-- RUNNING  ---------------"
	${NPC_EXEC}
	@echo "-- DONE --------------------"

obj_dir/Vtop: $(CXX_SRC) $(V_SRC)
	@echo "-- VERILATE ---------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(CXX_SRC) $(V_SRC) --CFLAGS "$(CXXFLAGS)" --LDFLAGS "$(LIBS)"
	$(MAKE) -C obj_dir -f Vtop.mk LDLIBS="$(LDLIBS)"

clean: 
	rm -r ./obj_dir/*  *.vcd

