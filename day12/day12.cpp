//https://adventofcode.com/2020/day/12
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day12.hpp"
#include <vector>
#include <iostream>

using namespace std;

vector<NavInstr*>* GetInput(){
	vector<NavInstr*>* input = new vector<NavInstr*>;
	char instruction;
	int distance;
	while(scanf("%c%i\n", &instruction, &distance) != EOF){
		input->push_back(new NavInstr(instruction, distance));
	}
	return input;
}

void SailBoat(BoatState* boat, vector<NavInstr*>* instructions){
	NavInstr* instr;
	for(int i = 0; i < instructions->size(); i++){
		instr = instructions->at(i);
		switch(instr->instruction){
			case 'E':
			case 'S':
			case 'W':
			case 'N':
				boat->DriftDirection(instr->instruction, instr->distance);
				break;
			case 'L':
			case 'R':
				boat->Turn(instr->instruction, instr->distance);
				break;
			case 'F':
				boat->SailForward(instr->distance);
				break;
		}
	}
}