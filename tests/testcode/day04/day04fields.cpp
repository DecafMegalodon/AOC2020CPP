#include <iostream>
#include "../../../day04/day04.hpp"
#include <string>
#include <vector>

using namespace std;

int main(){
	int valid = 0;
	vector<Passport*>* input = GetInput();
	for(auto passport: *input){  //For passport in input...
		valid += passport->UpdateFieldValidity();
	}
	cout << valid;
}