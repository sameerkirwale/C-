#include <iostream>
#include <math.h>

using namespace std;

int main () {
	
	int input_num, binary_num = 0, i = 0, digit ;
	
	cin >> input_num ;
	
	while ( input_num > 0 ) {
		
		digit = input_num & 1 ; // get the digit
		
		binary_num += ( pow ( 10, i ) * digit ) ; // convert the digit to binary form
		
		input_num = input_num >> 1 ; // right shift the number
		
		i++ ;
	}
	
	cout << "Binary form of given number is :" << binary_num << endl ;
}
