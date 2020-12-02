#include <vector>
#include <iostream>
#include "../../day01.hpp"

using namespace std;

int main() {

	vector<int>* input = GetInput();

	int int1, int2, int3;
	//FindSum(vector<int>* numbers, int sum, int* num1, int* num2)
	FindSumThree(input, 9, &int1, &int2, &int3);
	cout << int1 * int2 * int3;
}