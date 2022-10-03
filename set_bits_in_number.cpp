#include<iostream>
using namespace std ;

// no. of set bits in a  number

int main () {
	
	int input_number, set_bit = 0 ; 
	// int total_bits = 32 ;
	
	cout << "Enter the number you want : ";
	cin >> input_number ;
	
	while ( input_number != 0 ) {
		
		if ( input_number & 1 == 1 ) { // this returns 1 if lsb of number is 1, otherwise it returns zero
			set_bit ++ ; 
		}
		/*else {
			set_bit += 0 ;
		}*/
		
		input_number = input_number >> 1 ; // right shifting the number by 1 bit
		// total_bits -- ;
		
	}
	
	cout << "No. of 1's in the given number is / are : "<< set_bit << endl;
}
