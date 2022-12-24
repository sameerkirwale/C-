//Compliment of Base 10 Integer

#include <iostream>
// #include <math.h> 
using namespace std;

int main () {
	
	/* My Logic 
	int input_num, compliment = 0, digit, invert_digit, i = 0 ;
	
	cin >> input_num;
	
	while ( input_num != 0 ) {
	
		digit = input_num & 1 ; // get the binary digit
		
		input_num = input_num >> 1 ; // right shift the number
		
		invert_digit = ! digit ; // get the binary digit inverted
		
		if ( invert_digit == 1 ) {
			
			compliment += pow ( 2, i ) ; // get the binary number into decimal form
		}
		
		i++ ;
	} 
	*/
	
	int input_num, copy_input_num = 0 , mask = 0 , compliment ;
	
	cin >> input_num ;
	
	copy_input_num = input_num ;
	
	if ( input_num == 0 ) {               // egde case 
		compliment = ! input_num ;
	}
	
	else {
		
		while ( copy_input_num != 0 ) {
			mask = mask << 1 ;
			mask = mask | 1 ;
			copy_input_num = copy_input_num >> 1 ;
		}
	
		compliment = ( ~ input_num ) & mask ;	
	}
	
	cout << "Compliment of given number is : "<< compliment << endl;
}
