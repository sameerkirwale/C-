// Power of 2 

#include <iostream>
#include <math.h>
using namespace std ;

int main () {
	/* My Logic #1
	int input_num , remainder, count = 0 ;
	
	cin >> input_num ;
	
	if ( input_num <= 0 ) {
		cout << "No. is not a power of 2" << endl ;
	}
	else {
	
		while ( input_num != 1 ) {
			
			remainder = input_num % 2 ;
			input_num = input_num / 2 ;
			if (remainder == 1) {
				count ++ ;
			}
		}
		
		if ( count >= 1 ) {
			
			cout << "No. is not a power of 2" << endl ;
		}
		
		else {
			
			cout << "No. is a power of 2" << endl;
		}
	} */
	
	/* My Logic #2 
	int input_num, power_of_2 = 1, i = 1 ;
	
	cin >> input_num ;
	
	if ( input_num <= 0 ) {
		cout << "no. is not a power of 2 " << endl;
	}
	else {
	
		while ( power_of_2 <= input_num && power_of_2 <= ( input_num / 2 ) ) {
			power_of_2 = ( pow (2,i) ) ;
			i++;
		}
		
		if ( power_of_2 == input_num ) {
			cout << "no. is a power of 2 " << endl;
		}
		else {
			cout << "no. is not a power of 2 " << endl;
		}
	} */
	
	int input_num, power_of_2 = 1, i = 0 ;
	
	cin >> input_num ;
	
	while ( power_of_2 != input_num && i < 30 ) {
		i++;
		power_of_2 *= 2 ;
	}
	if ( power_of_2 == input_num ) {
		cout<< "No. is a power of 2" << endl;
	}
	else {
		cout<< "No. is not a power of 2" << endl;
	}		
}
