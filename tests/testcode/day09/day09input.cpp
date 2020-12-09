#include <iostream>
#include "../../../day09/day09.hpp"

using namespace std;

int main(){
	vector<long>* input = GetInput();
	for(int i = 0; i < input->size(); i++){
		cout << input->at(i) << endl;
	}
}