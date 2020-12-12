//https://adventofcode.com/2020/day/12
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_12_hpp_
#define day_12_hpp_

#include <vector>
#include "boatstate.hpp"

using namespace std;

struct NavInstr{
	char instruction;
	int distance;
	NavInstr(char instr, int dist){
		instruction = instr;
		distance = dist;
	}
};

vector<NavInstr*>* GetInput();
void SailBoat(BoatState*, vector<NavInstr*>*);


#endif