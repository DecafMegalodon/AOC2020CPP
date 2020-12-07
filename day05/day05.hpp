//https://adventofcode.com/2020/day/5
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_05_hpp_
#define day_05_hpp_

#include <vector>

/*Takes a null-terminated character array `part_string`,
a `start` of consecutive integers through which to consider
and the `size` of the run of intergers
Returns the indicated int through partitioning or the first element in a range
  if not enough partitions are supplied to fully describe and element
A non 2^n size array is not supported. Behavior in such a case is undefined
*/
int PartSearch(char* part_string, int start, int size);

int GetSeatID(char*);
std::vector<char*>* GetInput();

#endif