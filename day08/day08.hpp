//https://adventofcode.com/2020/day/3
//https://github.com/DecafMegalodon/AOC2020CPP

#include <vector>

//Opcode instruction values
const int kNOP = 0;
const int kJMP = 1;
const int kACC = 2;

struct Instruction;

std::vector<Instruction*>* GetInput();