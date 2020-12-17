#include <iostream>
#include "../../../day04/day04.hpp"
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<Passport*>* input = GetInput();
	string* ecl = new string("ecl");
	input->at(0)->data_->emplace(ecl, new string("Potat"));
	cout << input->at(0)->GetField(ecl)->c_str() << endl;
}