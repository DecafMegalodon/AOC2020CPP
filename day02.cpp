//https://adventofcode.com/2020/day/2
//https://github.com/DecafMegalodon/AOC2020CPP

#include <vector>
#include <iostream>
#include "day02.hpp"

using namespace std;

vector<Password_Info*>* ReadInput()
{
	vector<Password_Info*>* inputs = new vector<Password_Info*>;
	int min_repeats, max_repeats;
	char repeat_letter;
	char* passwordBuffer = new char[21];
	while(scanf("%d-%d %c: %s\n", &min_repeats, &max_repeats,
								&repeat_letter, passwordBuffer) != EOF){
		Password_Info* password_data = new Password_Info();
		password_data->min_repeats = min_repeats;
		password_data->max_repeats = max_repeats;
		password_data->repeat_letter = repeat_letter;
		password_data->password = passwordBuffer;
		passwordBuffer = new char[21];
		inputs->push_back(password_data);
	}
	delete passwordBuffer;
	return inputs;
	
}