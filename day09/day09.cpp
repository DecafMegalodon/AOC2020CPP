//https://adventofcode.com/2020/day/8
//https://github.com/DecafMegalodon/AOC2020CPP

#include <iostream>
#include <vector>
#include "day09.hpp"

using namespace std;

vector<long>* GetInput(){
	//Todo, ensure int is 64 bits
	vector<long>* input = new vector<long>;
	long data;
	while(scanf("%ld\n", &data) != EOF)
		input->push_back(data);
	return input;
}


/*
Checks to see if a pair of numbers sums up to `summable`.
If so, returns 0. Otherwise, it returns `summable` back

Todo: Explanation of how the algorithm works
Todo?: Vectorize the algorithm? Maybe even with SIMD
*/
long Check_Sums(long* numbers, int preamble_len, long summable){
	for(int offset = 0; offset < preamble_len; offset++){
		for(int comp = 0; comp < (preamble_len - offset); comp++){
			if(numbers[comp+offset] + numbers[comp] == summable)
				return 0;
		}
	}
	return summable; //Couldn't find a pair that summed to it
}