//https://adventofcode.com/2020/day/8
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day08.hpp"
#include <iostream>  //scanf
#include <cstring>  //strncpy

using namespace std;

//Reads the sequences of opcodes for the virtual processor to run
vector<Instruction*>* GetInput(){
	vector<Instruction*>* instructions = new vector<Instruction*>;
	char* instr_buf = new char[4];  // Leave room for \0
	int instr_data;
	int opcode;
	
	while(scanf("%3s %d", instr_buf, &instr_data) != EOF){
		if(strncmp(instr_buf, "nop", 3) == 0)
			opcode = kNOP;
		else if(strncmp(instr_buf, "jmp", 3) == 0)
			opcode = kJMP;
		else if(strncmp(instr_buf, "acc", 3) == 0)
			opcode = kACC;
			
		instructions->push_back(new Instruction(opcode, instr_data));
		instr_buf = new char[4];
	}
	
	delete instr_buf;
	return instructions;
}