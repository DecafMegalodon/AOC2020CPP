//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#include <vector>
#include <iostream>
#include <cstring>
#include "day04.hpp"

using namespace std;

vector<Passport*>* GetInput(){
	vector<Passport*>* input = new vector<Passport*>;
	char linebuffer[255];
	char key[4];
	char data[41];
	int read_result = 0;
	
	while(true){
		fgets(linebuffer, 255, stdin);
		
		if(feof(stdin))  //We're read all of the input
			break;
			
		if(strlen(linebuffer) == 2){  //If it's only new
			cout << "NEW PASSPORT!" << endl;
			continue;
		}
		cout << strlen(linebuffer) << linebuffer;
	}
	
	return input;
}