#include <iostream>
#include "../../day05/day05.hpp"
#include <cstring>

using namespace std;

int main(){
	vector<BoardingOrder*>* input = GetInput();
	char* row = new char[8];
	char* col = new char[4];
	for(int i = 0; i < input->size(); i++){
		BoardingOrder b_ord = *(input->at(i));
		cout << get<0>(b_ord) << "aaaand" << col << endl;
	}
}