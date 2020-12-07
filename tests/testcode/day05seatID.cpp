#include <iostream>
#include "../../day05/day05.hpp"

using namespace std;

int main(){
	char* input = new char[11];
	scanf("%s", input);
	cout << GetSeatID(input);
}