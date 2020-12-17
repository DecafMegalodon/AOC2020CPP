#include <iostream>
#include "../../../day04/day04.hpp"
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<Passport*>* input = GetInput();
	for(auto passport: *input){  //For passport in input...
		//cout << passport->data_->size() << endl;
		for(auto field: *passport->data_){  //For data pair in the passport...
			cout << field.first->c_str() << ':' << field.second->c_str() << ' ';
		}
		cout << endl;
	}
}