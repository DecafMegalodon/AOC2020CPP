#include <iostream>
#include "../../../day12/day12.hpp"

using namespace std;

int main(){
	vector<NavInstr*>* input = GetInput();
	for(int i = 0; i < input->size(); i++){
		NavInstr* instr = input->at(i);
		cout << instr->instruction << instr->distance << endl;
	}
}