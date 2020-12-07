//https://adventofcode.com/2020/day/5
//https://github.com/DecafMegalodon/AOC2020CPP

#include <iostream>
#include <cstring> // strncpy
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

int GetSeatID(char* part_string){
	char* row = new char[8];
	row[7] = '\0';
	char* col = new char[4];
	col[3] = '\0';
	strncpy(row, part_string, 7);
	strncpy(col, part_string+7, 3);
	return 8*PartSearch(row, 0, 128) + PartSearch(col, 0, 8);
}

vector<char*>* GetInput(){
	vector<char*>* inputs = new vector<char*>;
	char* char_buff = new char[11];
	while(scanf("%s", char_buff) != EOF){
		inputs -> push_back ( char_buff );
		char_buff = new char[11];
	}
	delete[] char_buff;
	return inputs;
}
