//https://adventofcode.com/2020/day/12
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_12_hpp_
#define day_12_hpp_

#include <vector>

struct NavInstr{
	char instruction;
	int distance;
	NavInstr(char instr, int dist){
		instruction = instr;
		distance = dist;
	}
};

std::vector<NavInstr*>* GetInput();


#endif