//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_04_hpp_
#define day_04_hpp_

#include <vector>
#include <string>
#include <map>

using namespace std;

class Passport{
	bool valid_;
	
	public:
	map<string*, string*>* data_;  //(currently) needs to be public for unit testing
	
	
	Passport(){
		data_ = new map<string*, string*>;
		valid_ = true;  //Default to true, and add tests to show otherwise
	}
	
	void Append(string* key, string* data){
		data_->emplace(key, data);  //Todo: Check for duplicate keys?
	}
	
	//Get the passport entry if it's defined. Returns null otherwise
	string* GetField(string* field){
		try{
			return data_->at(field);
		}
		catch (std::out_of_range& oor){  //Not present in passport
			return new string("UH OH! Stinky.");	
		}
	}
	
	bool GetValid(){
		return valid_;
	}
	
	//Checks if a passport has all required fields. If not, invalidates the passport.
	//If so, does not invalidate (but does not revalidate if invalidated)
	//Returns the result of the check
	bool UpdateFieldValidity(){
		vector<string> required_fields = {"byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid"};
		string* cur_field = NULL;
		for(int i = 0; i < 7; i++){
			cur_field = &required_fields[i];
			cout << *cur_field << endl;
			if(GetField(cur_field) == NULL){  //Not defined (or empty. Both are equally bad)
				valid_ = false;
				return false;
			}
		}
		return true;
	}
	
};

vector<Passport*>* GetInput();

#endif