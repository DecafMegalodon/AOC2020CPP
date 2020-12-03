//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_03_hpp_
#define day_03_hpp_

#include <vector>
#include <bitset>

using namespace std;

const int kSlopeWidth = 31;
typedef bitset<kSlopeWidth> SlopeLine;
typedef vector<SlopeLine*> Slope;

Slope* GetInput();

#endif