//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP

#include <vector>
#include <iostream>
#include "day08.hpp"

using namespace std;

void ResetRunCounts(std::vector<Instruction*>* program){
	for(int i = 0; i < program->size(); i++)
		program->at(i)->run_num = 0;
}

int main(){
	std::vector<Instruction*>* program = GetInput();
	Instruction* cur_instr;
	int orig_opcode;
	for(int i = 0; i < program->size(); i++){
		cur_instr = program->at(i);
		orig_opcode = cur_instr->opcode;
		if(orig_opcode != kACC){ //Check if instruction is jmp or nop
			if(orig_opcode == kNOP)
				cur_instr->opcode = kJMP;
			else
				cur_instr->opcode = kNOP;
		
			if(RunVM(program) == kFinished)  //Did the program successfully terminate?
				exit(0);  // The answer is already on stdout. We're done here
				
			cur_instr->opcode = orig_opcode;  //Put it back to how it was. This wasn't the answer
			ResetRunCounts(program);
		
		}
		//Else ignore changing this instruction
	}
	// Uh oh. We should have exited by now
	cout << "No answer was found" << endl;
}