//https://adventofcode.com/2020/day/1
//https://github.com/DecafMegalodon/AOC2020CPP


#include <stdio.h>
#include <iostream>
#include <vector>
#include "day01.h"

using namespace std;

vector<int>* GetInput() {
	int input;
	vector<int>* input_vector = new vector<int>;
	
	while(scanf("%d\n", &input) != EOF)
		input_vector->push_back(input);
	
	return input_vector;
}

int main(int argc, char** argv) {
	vector<int>* input = GetInput();
	
}