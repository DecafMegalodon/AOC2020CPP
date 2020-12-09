//https://adventofcode.com/2020/day/8
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_09_hpp_
#define day_09_hpp_

#include <vector>

std::vector<long>* GetInput();
//long Check_Sums(long[] numbers, int preamble_len, long summable);
long Check_Sums(long*, int, long);
//long FindFault(vector<long>* numbers, int preamble_len)
long FindFault(std::vector<long>*, int);
//long FindWeakness(vector<long>* numbers, long fault)
long FindWeakness(std::vector<long>*, long);
	
#endif