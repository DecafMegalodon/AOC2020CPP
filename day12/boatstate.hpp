#ifndef boatstate_hpp_
#define boatstate_hpp_

#include <iostream>
#include <cmath>

class BoatState{
	int cur_y_;
	int cur_x_;
	int y_vector_;
	int x_vector_;
	int heading_;
	
	public:
	
	BoatState(){
		cur_y_ = 0;
		cur_x_ = 0;
		y_vector_ = 0;
		x_vector_ = 1;
		heading_ = 0;
	}
	
	void SailForward(int amount){
		cur_y_ += y_vector_ * amount;
		cur_x_ += x_vector_ * amount;
	}
	
	void DriftDirection(char direction, int amount){
		switch(direction){
			case 'E':
				cur_x_ += amount;
				break;
			case 'S':
				cur_y_ += amount;
				break;
			case 'W':
				cur_x_ -= amount;
				break;
			case 'N':
				cur_y_ -= amount;
				break;
			default:
				std::cout << "INVALID DIRECTION: " << direction << std::endl;
			
		}
	}
	
	//Turns the ship in 'L'eft or 'R' right `direction` by `magnitude` amount
	//A heading of 0 indicates eastward. Increased heading turns clockwise
	void Turn(char direction, int magnitude){
		int mag_mod = (direction == 'L' ? -1 : 1);
		heading_ = (360 + (magnitude * mag_mod)) % 360;
		switch(heading_){
			case 0:
				y_vector_ = 0;
				x_vector_ = 1;
				break;
			case 90:
				y_vector_ = 1;
				x_vector_ = 0;
				break;
			case 180:
				y_vector_ = 0;
				x_vector_ = -1;
				break;
			case 270:
				y_vector_ = -1;
				x_vector_ = 0;
				break;
			default:
				std::cout << "INVALID HEADING: " << heading_ << std::endl;
		}
	}
	
	//Returns the current taxicab distance to 0,0 from the current position
	int TaxiDistance(){
		return abs(cur_x_) + abs(cur_y_);
	}
	
};

#endif