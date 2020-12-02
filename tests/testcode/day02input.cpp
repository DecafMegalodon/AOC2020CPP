#include <vector>
#include <iostream>
#include "../../day02/day02.hpp"

using namespace std;

int main() {

	vector<Password_Info*>* input = GetInput();

	for(int i = 0; i < input->size(); ++i) {
		Password_Info* cur = input->at(i);
		printf("%d-%d %c: %s\n", cur->min_repeats, cur->max_repeats, cur->repeat_letter, cur->password);
	}
}