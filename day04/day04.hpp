//https://adventofcode.com/2020/day/4
//https://github.com/DecafMegalodon/AOC2020CPP

#ifndef day_04_hpp_
#define day_04_hpp_

#include <vector>
#include <string>
#include <map>

using namespace std;

class Passport{
	map<string*, string*>* data_;
	bool valid_;
	
	public:
	Passport(){
		data_ = new map<string*, string*>;
		valid_ = true;  //Default to true, and add tests to show otherwise
	}
	
	void Append(string* key, string* data){
		data_->at(key) = data;  //Todo: Check for duplicate keys?
	}
	
	//Get the passport entry if it's defined. Returns null otherwise
	string* Get_Field(string* field){
		try{
			return data_->at(field);
		}
		catch (std::out_of_range& oor){  //Not present in passport
			return NULL;	
		}
	}
	
	bool GetValid(){
		return valid_;
	}
};

vector<Passport*>* GetInput();

#endif