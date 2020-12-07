//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day05.hpp"
#include <iostream>  // cout
#include <algorithm>  // max

using namespace std;

int main(){
	vector<char*>* inputs = GetInput();
	int cur_max_seatID = -1;
	int cur_seatID;
	
	for(int i = 0; i < inputs->size(); i++){
		cur_seatID = GetSeatID(inputs -> at(i));
		cur_max_seatID = max(cur_max_seatID, cur_seatID);
	}
	cout << cur_max_seatID << endl;
}