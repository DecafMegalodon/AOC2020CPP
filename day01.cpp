//https://adventofcode.com/2020/day/1
//https://github.com/DecafMegalodon/AOC2020CPP
//Common functions between parts a and b for day 1

#include <vector>
#include <iostream>
#include <tuple>
#include "day01.hpp"

using namespace std;

vector<int>* GetInput() {
	int input;
	vector<int>* input_vector = new vector<int>;
	
	while(scanf("%d\n", &input) != EOF)
		input_vector->push_back(input);
	
	return input_vector;
}

void FindSum(vector<int>* numbers, int sum, int* num1, int* num2) {
	for(int outer = 0; outer < numbers->size(); outer++)
	{
		for(int inner = outer + 1; inner < numbers->size(); inner++){
			if(numbers->at(outer) + numbers->at(inner) == sum){
				*num1 = numbers->at(outer);
				*num2 = numbers->at(inner);
				return;
			}
		}
	}
}

void FindSumThree(vector<int>* numbers, int sum, int* num1, int* num2, int* num3) {
	for(int outer = 0; outer < numbers->size(); outer++){
		for(int inner = outer + 1; inner < numbers->size(); inner++){
			for(int innerer = inner + 1; innerer < numbers->size(); innerer++){
				if(numbers->at(outer) + numbers->at(inner) + numbers->at(innerer) == sum){
					*num1 = numbers->at(outer);
					*num2 = numbers->at(inner);
					*num3 = numbers->at(innerer);
					return;
				}
			}
		}
	}
}