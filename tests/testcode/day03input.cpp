#include <vector>
#include <iostream>
#include "../../day03/day03.hpp"

using namespace std;

int main() {

	Slope* input = GetInput();
	for(int i = 0; i < input->size(); i++){
		for(int j = 0; j < kSlopeWidth; j++){
			cout << (input->at(i)->test(j) ? '#' : '.');
		}
		cout << endl;
	}
}