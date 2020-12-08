//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP

#include <vector>
#include <iostream>
#include "day08.hpp"

int main(){
	std::vector<Instruction*>* program = GetInput();
	int dupInstr = RunVM(program);
	std::cout << dupInstr << std::endl;
	
}