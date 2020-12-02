//https://adventofcode.com/2020/day/2
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day02.hpp"
#include <iostream>

int main(int argc, char** argv){
	int valid_passwords = 0;
	vector<Password_Info*>* input = GetInput();
	
	for(int i = 0; i < input->size(); ++i) {
		Password_Info* cur = input->at(i);
		valid_passwords += IsPasswordValid(cur);
	}
	
	cout << valid_passwords << endl;
}