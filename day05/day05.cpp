//https://adventofcode.com/2020/day/5
//https://github.com/DecafMegalodon/AOC2020CPP

int PartSearch(char* part_string, int[] array, int size){
	if(part_string[0] == '\n')
		return array[0];
		
	switch(part_string[0]){
		case 'F': // Keep the front half of the array
		case 'L':
			return PartSearch(part_string + 1, array, size / 2);
		case 'B': //  Keep the back half of the array
		case 'R':
			return PartSearch(part_string + 1, array + (size / 2), size / 2);
	}
}