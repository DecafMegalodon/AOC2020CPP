#include <iostream>
#include "../../day05/day05.hpp"

using namespace std;

int main(){
	char* sequence = new char[20];
	int start;
	int size;
	scanf("%s %d %d", sequence, &start, &size);
	//int PartSearch(char* part_string, int start, int size){
	cout << PartSearch(sequence, start, size) << endl;
}