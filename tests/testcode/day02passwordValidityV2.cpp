#include <vector>
#include <iostream>
#include "../../day02.hpp"

using namespace std;

int main() {
	int valid_passwords = 0;
	vector<Password_Info*>* input = ReadInput();

	for(int i = 0; i < input->size(); ++i) {
		Password_Info* cur = input->at(i);
		valid_passwords += IsPasswordValidV2(cur);
	}
	cout << valid_passwords;
}