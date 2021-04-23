# ArithsGen – tool for arithmetic circuits generation
### FIT BUT bachelor's degree project

## Description
ArithsGen presents an open source tool that enables generation of various arithmetic circuits along with the possibility to export them to various representations which all serve their specific purpose. C language for easy simulation, Verilog for logic synthesis, BLIF for formal verification possibilities and CGP to enable further global optimization.

### Usage
```bash
python3 ariths_gen.py
```

### Example of generation
    #Example generation of Verilog representation of 8-bit unsigned dadda multiplier that uses cla to provide the final product
	a = Bus(N=8, prefix="a_bus")
	b = Bus(N=8, prefix="b_bus")

	u_dadda = UnsignedDaddaMultiplier(a=a, b=b, prefix="h_u_dadda_cla8", unsigned_adder_class_name=UnsignedCarryLookaheadAdder)
	u_dadda.get_v_code_hier(open("h_u_dadda_cla8.v", "w"))

## Documentation
Code documentation is provided using **pdoc** documentation generator tool. Source: https://pdoc3.github.io/pdoc/.

### Installation
```bash
pip3 install pdoc3	
```

### Usage
```bash
pdoc --html ariths_gen
```

## Formal verification
The `yosys_equiv_check.sh` script enables to formally check the equivalence of generated Verilog and BLIF representations of the same circuit.
It uses the Yosys Open SYnthesis Suite tool by Clifford Wolf. For further information, please visit: http://www.clifford.at/yosys/documentation.html.

## Execute permission
```bash
chmod +x yosys_equiv_check.sh
```

### Usage
```bash
./yosys_equiv_check.sh -v "verilog_file" -b "blif_file" [-H]
```

For more detailed description of script's usage, use help.
```bash
./yosys_equiv_check.sh -h|--help
```
