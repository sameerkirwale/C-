// Fibonnaci Series

#include <iostream> 
using namespace std ;

int main () {
	int input_number , first_number , second_number , output_number ;
	
	cout << " Enter the amount of numbers in Fibonacci Series : " ;
	cin >> input_number ;
	
	first_number = 0 ; // first number is always zero 
	cout << "\n" << first_number ;
	
	second_number = 1 ; // second number is always one 
	cout << " " << second_number ;
	
	for ( int i = 1 ; i <= input_number ; i++ ) {
		
		output_number = first_number + second_number ;
		cout << " " << output_number ; // next number in fibonacci serie
		
		first_number = second_number ;
		second_number = output_number ;
	}
	
}
