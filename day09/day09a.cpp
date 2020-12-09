//https://adventofcode.com/2020/day/8
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day09.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main(){
	const int kPreamble = 25;
	vector<long>* vect_input = GetInput();
	long* input = vect_input->data();
	long result;
	//Todo: Clean up this mess
	for(int i = kPreamble; i < vect_input->size(); i++){
		result = Check_Sums(input+(i-kPreamble),
					kPreamble,
					input[i]);
		if(result != 0){
			cout << result << endl;
			return 0;
		}
	}
	return -1; //We didn't find the answer...
}