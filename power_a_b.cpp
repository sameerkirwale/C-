#include <iostream>
#include <math.h>

using namespace std ;

int main () {
	
	float base, answer = 1 ;
	
	int power ;
	
	cout << "Enter the Base : " ;
	
	cin >> base ;
	
	cout << "Enter the Power : ";
	
	cin >> power ;
	
	if ( power >= 1 ) {
		
		while ( power-- ) {
			
			answer = answer * base ;
		}
	}
	
	else if ( power < 0 ) {
		
		while ( power != 0 ) {
			
			power += 1 ;
			
			answer = answer * ( 1 / base ) ;
		}
	}
	
	else if ( power == 0 ) {
		
		answer ;
	}
	
	cout << "The answer is : " << answer << endl ;
}
