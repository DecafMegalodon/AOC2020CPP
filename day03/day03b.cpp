//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP
#include "day03.hpp"
#include <iostream>

using namespace std;

int main(){
	long answer = 1;
	Slope* input = GetInput();
	answer *= CountCollisions(input, 1, 1);
	answer *= CountCollisions(input, 1, 3);
	answer *= CountCollisions(input, 1, 5);
	answer *= CountCollisions(input, 1, 7);
	answer *= CountCollisions(input, 2, 1);
	cout << answer << endl;
	return 0;
}