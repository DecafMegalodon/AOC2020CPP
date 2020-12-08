//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_08_hpp_
#define day_08_hpp_

#include <vector>

//Opcode instruction values
const int kNOP = 0;
const int kJMP = 1;
const int kACC = 2;

//"magic" number to indicate the program successfully reached the end
const int kFinished = -90210;

struct Instruction{
	int opcode;
	int opdata;
	int run_num = 0;
	
	Instruction(int op, int data){
		opcode = op;
		opdata = data;
	}
};

std::vector<Instruction*>* GetInput();
int RunVM(std::vector<Instruction*>*);

#endif