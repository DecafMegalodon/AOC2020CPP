//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_03_hpp_
#define day_03_hpp_

#include <vector>
#include <bitset>

using namespace std;

#define SLOPEWIDTH 31 //For scanf length
const int kSlopeWidth = SLOPEWIDTH; //For everything else
typedef vector<bitset<kSlopeWidth>*> Slope;

Slope* GetInput();

#endif