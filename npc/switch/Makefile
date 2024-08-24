#WAVEFORM
include $(NVBOARD_HOME)/scripts/nvboard.mk

NAME := switch
all:
	@echo "Write this Makefile by your self."
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!"
	@echo "Write this Makefile by your self."
	verilator -Wall --trace --build --cc ./csrc/$(NAME).cpp --exe ./vsrc/$(NAME).v
	make -C obj_dir -f V$(NAME).mk V$(NAME)
	./obj_dir/V$(NAME)
gtkwave:
	@echo "--- WAVES ----"
	gtkwave waveform.vcd

clean:
	rm -rf ./obj_dir
	rm -rf waveform.vcd
