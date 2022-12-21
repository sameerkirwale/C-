//Revrese of a Positive Integer
#include <iostream>
using namespace std;

int main () {
	
	int input_num , reverse_integer = 0, digit ;
	
	cin >> input_num ;
	
	while ( input_num > 0 ) {
		
		digit = input_num % 10 ; // get the digit 
		
		input_num = input_num / 10 ; 
		
		reverse_integer = ( 10 * reverse_integer ) + digit ; // create the number
		
	}
	
	cout << "Reverse of the given number is :" << reverse_integer << endl;
}
