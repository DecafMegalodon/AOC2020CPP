#include <iostream>
#include "../../../day04/day04.hpp"
#include <string>
#include <vector>

using namespace std;

int main(){
	int num_valid = 0;
	bool has_all = false;
	vector<Passport*>* input = GetInput();
	for(auto passport: *input){  //For passport in input...
		has_all = passport->UpdateFieldValidity();
		if(has_all){
			passport->ValidateFieldValues();
		}
		num_valid += passport->GetValid();
	}
	cout << num_valid;
}