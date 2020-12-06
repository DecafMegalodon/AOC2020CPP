//https://adventofcode.com/2020/day/5
//https://github.com/DecafMegalodon/AOC2020CPP

#include <iostream>

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