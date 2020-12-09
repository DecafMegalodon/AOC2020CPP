#include <iostream>
#include "../../../day09/day09.hpp"

using namespace std;

int main(){
	vector<long>* input = GetInput();
	for(int i = 5; i < input->size(); i++){
		cout << Check_Sums(input->data()+(i-5), 5, input->at(i)) << endl; 
	}
}