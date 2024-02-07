verilator_cmd := verilator
src := top.sv
verilator_cpp_script := main.cpp
obj_dir := sim

verilator_args :=	--cc $(src) \
			--Mdir $(obj_dir) \
			--exe $(verilator_cpp_script) \
			--timing \
			--trace

all: run

run: build
	cd $(obj_dir) && ./Vtop

build: verilate
	cd $(obj_dir) && $(MAKE) -f Vtop.mk

verilate:
	$(verilator_cmd) $(verilator_args)
