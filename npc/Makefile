all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!"
	verilator -Wall --trace -cc example.v --exe main.cpp
	make -C obj_dir -f example.mk example
	./obj_dir/example
	@echo "--- WAVES ----"
	gtkwave waveform.vcd



clean:
	rm -rf ./obj_dir
	rm -rf waveform.vcd
include ../Makefile
