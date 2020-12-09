//https://adventofcode.com/2020/day/8
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day09.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main(){
	const int kPreamble = 25;
	vector<long>* vect_input = GetInput();
	long fault = FindFault(vect_input, kPreamble);
	long weakness = FindWeakness(vect_input, fault);
	cout << weakness << endl;
	return 0;
}