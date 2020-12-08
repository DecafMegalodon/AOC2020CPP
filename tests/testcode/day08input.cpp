#include <iostream>
#include "../../day08/day08.hpp"
//#include <cstring>

using namespace std;

int main(){
	vector<Instruction*>* program = GetInput();
	Instruction* cur_instr;
	for(int i = 0; i < program->size(); i++){
		cur_instr = program->at(i);
		cout << cur_instr->opcode << " " << cur_instr->opdata << endl;
	}
}