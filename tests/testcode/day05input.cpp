#include <iostream>
#include "../../day05/day05.hpp"
#include <cstring>

using namespace std;

int main(){
	vector<char*>* input = GetInput();
	char* row = new char[8];
	row[7] = '\0';
	char* col = new char[4];
	col[3] = '\0';
	for(int i = 0; i < input->size(); i++){
		char* b_pass = input->at(i);
		//cout << b_pass << endl;
		strncpy(row, b_pass, 7);
		strncpy(col, b_pass+7, 3);
		cout << row  << col << endl;
	}
}