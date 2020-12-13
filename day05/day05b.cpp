//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day05.hpp"
#include <iostream>  // cout
#include <algorithm>  // max

using namespace std;

int main(){
	vector<char*>* inputs = GetInput();
	int num_inputs = inputs->size();
	int* sorted_seats = ConvertPartitionsToSeatIDs(inputs);
	
	//  Find the first hole with seat-ID neighbors both defined
	for(int i = 1; i < (num_inputs - 1); i++){
		if(sorted_seats[i - 1] == sorted_seats[i] - 2){
			cout << i << endl;
			exit(0);
		}
		
		
	}
}