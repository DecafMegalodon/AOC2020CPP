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
