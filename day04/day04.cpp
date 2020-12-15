//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#include <vector>
#include <iostream>
#include "day04.hpp"

using namespace std;

vector<Passport*>* GetInput(){
	vector<Passport*>* input = new vector<Passport*>;
	char key[4];
	char data[41];
	int read_result = 0;
	
	while(true){
		read_result = scanf("%3s:%40s ", key, data);
		cout << key << '@' << data << "RR:" << read_result << endl;
		if(read_result == EOF)
			break;
		if(read_result != 2){
			cout << "NEWPASSPORT!\n";
		}
		
		
		
	}
	
	return input;
}