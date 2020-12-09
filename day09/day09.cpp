//https://adventofcode.com/2020/day/8
//https://github.com/DecafMegalodon/AOC2020CPP

#include <iostream>
#include <vector>
#include "day09.hpp"

using namespace std;

vector<long>* GetInput(){
	vector<long>* input = new vector<long>;
	long data;
	while(scanf("%ld\n", &data) != EOF)
		input->push_back(data);
	return input;
}
