#include <vector>
#include <iostream>
#include "../../day03/day03.hpp"

using namespace std;

int main() {

	Slope* input = GetInput();
	int collisions = CountCollisions(input, 1, 0);
	cout << collisions << endl;
}