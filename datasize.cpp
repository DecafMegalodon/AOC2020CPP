#include <iostream>
using namespace std;
 
int main() {
	int cat = 0;
	for(int i = 0; i<33; i++){
	   cout << cat << endl;
	   cat |= 0b01 << i;
	}
}
