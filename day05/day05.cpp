//https://adventofcode.com/2020/day/5
//https://github.com/DecafMegalodon/AOC2020CPP

#include <iostream>
#include <tuple>
#include "day05.hpp"

using namespace std;

int PartSearch(char* part_string, int start, int size){
	if(part_string[0] == '\0')
		return start;
		
	switch(part_string[0]){
		case 'F': // Keep the front half of the array
		case 'L':
			return PartSearch(part_string + 1, start, size / 2);
		case 'B': //  Keep the back half of the array
		case 'R':
			return PartSearch(part_string + 1, start + (size / 2), size / 2);
		default: {
			cout << "Invalid partition supplied: " << part_string[0] << endl;
			exit(-2);
		}
	}
}

vector<BoardingOrder*>* GetInput(){
	vector<BoardingOrder*>* inputs = new vector<BoardingOrder*>;
	BoardingOrder* b_ord;
	char* row_parts = new char[8];  // Include space for null terminator
	char* col_parts = new char[4];
	while(scanf("%7s%3s\n", row_parts, col_parts) != EOF) {
		// cout << row_parts << "and" << col_parts << endl;
		b_ord = new BoardingOrder(row_parts, col_parts);
		cout << get<0>(*b_ord) << endl;
		cout << get<1>(*b_ord) << endl;
		inputs->push_back(b_ord);
		char* row_parts = new char[8];
		char* col_parts = new char[4];
	}
	
	delete row_parts;  // Guranteed to not delete data stored in part of inputs
	delete col_parts;
	
	return inputs;
}
