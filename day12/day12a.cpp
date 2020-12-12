//https://adventofcode.com/2020/day/12
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day12.hpp"
#include "boatstate.hpp"
#include <vector>
#include <iostream>

int main(){
	vector<NavInstr*>* input = GetInput();
	BoatState* boaty_mc_boatface = new BoatState;
	SailBoat(boaty_mc_boatface, input);
	cout << boaty_mc_boatface->TaxiDistance() << endl;
	//2520 too high
}