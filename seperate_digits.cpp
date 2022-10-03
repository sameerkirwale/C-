#include<iostream>
using namespace std;

// Printing sum and product of digits of a number
int main () {
	
	int input_number, digit ;
	int sum = 0 ; // initializing to print sum of digits
	int product = 1 ; // initializing to print product of digits 
	
	cout << "Enter the number you want : ";
	cin >> input_number;
	
	while ( input_number > 0 ) {
		
		digit = input_number % 10 ; 
		sum = sum + digit ; // sum of digits 
		product = product * digit ; // product of digits
		input_number = input_number / 10 ;
	}
	
	cout << "Sum of digits of the inputted number is : "<< sum << endl ;
	
	cout << "Product of the digits of inputted number is : " << product << endl ;
}
