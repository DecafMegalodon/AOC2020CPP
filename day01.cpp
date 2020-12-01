//https://adventofcode.com/2020/day/1
//https://github.com/DecafMegalodon/AOC2020CPP
//Common functions between parts a and b for day 1

#include <vector>
#include <iostream>
#include "day01.hpp"

using namespace std;

vector<int>* GetInput() {
	int input;
	vector<int>* input_vector = new vector<int>;
	
	while(scanf("%d\n", &input) != EOF)
		input_vector->push_back(input);
	
	return input_vector;
}
