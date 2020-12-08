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

//Return the value of the accum(ulator) right before an instruction is
//executed a second time
int RunVM(vector<Instruction*>* program){
	int pc = 0;  //Program counter
	int accum = 0;  //Accumulator
	Instruction* cur_instr;
	
	while(1){
		//Todo: Check for end of program
		cur_instr = program->at(pc);
		
		cur_instr->run_num += 1;
		if(cur_instr->run_num > 1)
			return accum;
		
		switch(cur_instr->opcode){
			case kNOP:
				pc += 1;
				break;
			case kJMP:
				pc += cur_instr->opdata;
				break;
			case kACC:
				accum += cur_instr->opdata;
				pc += 1;
				break;
			default:
				cout << "INVALID OPERATION: " << cur_instr->opcode << endl;
				exit(-1);
		}
	}
	
	
}