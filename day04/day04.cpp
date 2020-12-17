//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#include <vector>
#include <iostream>
#include <cstring>
#include "day04.hpp"

using namespace std;

vector<Passport*>* GetInput(){
	vector<Passport*>* input = new vector<Passport*>;
	Passport* cur_pass = new Passport();
	char linebuffer[255];
	char key[4];
	char data[41];
	char* buff_pos = linebuffer;
	int read_result = 0;
	
	while(true){
		fill(linebuffer, linebuffer+254, 0);  //Clear the buffer first
		fgets(linebuffer, 255, stdin);
			
		if(strlen(linebuffer) == 1){  //Todo: This is sometimes inconsistent. CRLF vs CR vs LF suspected
			input->push_back(cur_pass);
			cur_pass = new Passport();
			continue;
		}
		
		//Process passport info
		while(sscanf(buff_pos, "%3s:%40s ", key, data) != EOF){
			cur_pass->Append(new string(key), new string(data));
			buff_pos += (3 + 1 + strlen(data) + 1); //LBL + : + DATAHERE + ' '
		}
		
		if(feof(stdin)){  //Have we read all of the input?
			input->push_back(cur_pass);
			break;
		}
		buff_pos = linebuffer;
	}
	return input;
}