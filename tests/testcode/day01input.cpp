#include <vector>
#include <iostream>
#include "../../day01/day01.hpp"

using namespace std;

int main() {

	vector<int>* input = GetInput();

	for(int i = 0; i < input->size(); ++i) {
		cout << input->at(i) << endl;
	}
}