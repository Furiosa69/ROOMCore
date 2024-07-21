all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!"
	verilator -Wall --trace -cc top.v --exe sim_main.cpp
	make -C obj_dir -f Vtop.mk Vtop
	./obj_dir/Vtop
	@echo "--- WAVES ----"
	gtkwave waveform.vcd

clean:
	rm -rf ./obj_dir
	rm -rf waveform.vcd
