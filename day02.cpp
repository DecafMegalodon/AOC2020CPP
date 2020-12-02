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

bool IsPasswordValid(Password_Info* data){
	int num_matches = 0;
	for(int offset = 0; offset < 20; ++offset){
		if(data->password[offset] == data->repeat_letter)
			++num_matches;
	}
	return (num_matches >= data->min_repeats && num_matches <= data->max_repeats);
}

//returns true if exactly one of password[min_repeats] or password[max_repeats] matches the required character
//We should probably be checking if the min/max are within the password to avoid unexpected reads
//Passwords are 1 indexed
bool IsPasswordValidV2(Password_Info* data){
	return (data->password[data->min_repeats - 1] == data->repeat_letter) ^ 
	                       (data->password[data->max_repeats - 1] == data->repeat_letter);
}