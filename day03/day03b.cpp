//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP
#include "day03.hpp"
#include <iostream>

using namespace std;

int main(){
	Slope* input = GetInput();
	int collisions = CountCollisions(input, 1, 3);
	cout << collisions << endl;
	return 0;
}