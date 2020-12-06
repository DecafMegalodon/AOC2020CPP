//https://adventofcode.com/2020/day/5
//https://github.com/DecafMegalodon/AOC2020CPP

/*Takes a null-terminated character array `part_string`,
an array of integers through which to binary partition,
and the current `size` of `array` under consideration.
Returns the indicated int in `array` OR the first int left in the range
	if there's not enough partitions to fully specify
A non 2^n size array should not be supplied. Behavior in such a case is undefined
*/
int PartSearch(char* part_string, int[] array, int size);