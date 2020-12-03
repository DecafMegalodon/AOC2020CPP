//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP

#include "day03.hpp"
#include <iostream>
using namespace std;

Slope* GetInput(){
	Slope* input = new Slope;
	SlopeLine* slope_line = new SlopeLine(0);
	char* input_line = new char[kSlopeWidth];
	
	//Todo: Remove string length hardcode
	while(scanf("%31s", input_line) != EOF){
		for(int i = 0; i < kSlopeWidth; i++){
			slope_line->set(i, input_line[i] == '#');
		}
		input->push_back(slope_line);
		slope_line = new bitset<kSlopeWidth>(0);
	}
	
	delete slope_line;
	delete input_line;
	return input;
}

int CountCollisions(Slope* slope, int dY, int dX){
	int cur_collisions = 0;
	int cur_y = 0;
	int cur_x = 0;
	while(cur_y < slope->size()){
		cur_collisions += slope-> at(cur_y) -> test(cur_x % kSlopeWidth);
		cur_y += dY;
		cur_x += dX;
	}
	return cur_collisions;
}