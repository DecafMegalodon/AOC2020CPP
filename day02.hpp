#ifndef day02_hpp_
#define day02_hpp_

#include <vector>

using namespace std;

struct Password_Info {
	int min_repeats;
	int max_repeats;
	char repeat_letter;
	char* password;
};

vector<Password_Info*>* ReadInput();
#endif