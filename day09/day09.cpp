//https://adventofcode.com/2020/day/9
//https://github.com/DecafMegalodon/AOC2020CPP

#include <iostream>
#include <vector>
#include <algorithm>  //Sort
#include <cstring>  //memcpy
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

//Find the first number that can't be summed in the `preamble` numbers
long FindFault(vector<long>* numbers, int preamble_len){
	long* input = numbers->data();
	long result;
	for(int i = preamble_len; i < numbers->size(); i++){
		result = Check_Sums(input+(i-preamble_len),
					preamble_len,
					input[i]);
		if(result != 0)
			return(result);
	}
	//Todo: Catch if an answer isn't found
	return -1;
}

long FindWeakness(vector<long>* numbers, long fault){
	long* data = numbers->data();
	long cur_sum = 0;
	int weak_start;
	int weak_len;
	for(weak_start = 0; weak_start < numbers->size(); weak_start++){
		for(weak_len = 1; weak_len < (numbers->size() - weak_start); weak_len++){
			cur_sum += data[weak_start + weak_len - 1];
			if(cur_sum >= fault)
				break;
		}
		if(cur_sum == fault)
			break;
		cur_sum = 0;
	}
	long* weak_array = new long[weak_len];
	memcpy(weak_array, data + weak_start , sizeof(long)*weak_len);
	sort(weak_array, weak_array+weak_len);
	long weakness = weak_array[0] + weak_array[weak_len-1];
	delete weak_array;
	return weakness;
}