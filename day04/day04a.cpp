//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day04.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
	int num_valid = 0;
	vector<Passport*>* input = GetInput();
	for(auto passport: *input){
		num_valid += passport->UpdateFieldValidity();
	}
	cout << num_valid << endl;
}