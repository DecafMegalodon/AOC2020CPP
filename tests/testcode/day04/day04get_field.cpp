#include <iostream>
#include "../../../day04/day04.hpp"
#include <string>
#include <vector>

using namespace std;

int main(){
	Passport* pass = new Passport();
	pass->Define("ecl", new string("TEST DATA"));
	cout << pass->GetField("ecl")->c_str() << endl;
}