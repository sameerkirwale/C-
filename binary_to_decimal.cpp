#include <iostream>
#include <math.h>

using namespace std;

int main () {
	
	int input_num , i = 0, decimal_num = 0 , digit ;
	
	cin >> input_num ; // input number is in binary form
	
	while ( input_num > 0 ) {
		
		digit = input_num % 10 ;
		
		input_num = input_num / 10 ;
		
		if ( digit == 1 ) {
			
			decimal_num += pow ( 2, i ) * digit ;
		}
		
		i++ ;
	}
	
	cout << "The given number in decimal form is : " << decimal_num << endl ;
}
