//https://adventofcode.com/2020/day/1
//https://github.com/DecafMegalodon/AOC2020CPP


#include <stdio.h>
#include <iostream>
#include <vector>
#include "day01.hpp"

using namespace std;

int main(int argc, char** argv) {
	int num1, num2;
	vector<int>* input = GetInput();
	FindSum(input, 2020, &num1, &num2);
	cout << num1 * num2;
}