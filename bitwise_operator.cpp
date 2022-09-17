#include <iostream>
using namespace std ;

int main () {
	int num_1 , num_2 , output_num ;
	cout << "Enter the no 1 : " ;
	cin >> num_1 ;
	cout << "Enter the no 1 : " ;
	cin >> num_2 ;
	
	// and operator 
	output_num = num_1 & num_2 ;
	cout << "and of two no is : " << output_num << endl;
	
	// or operator
	output_num = num_1 | num_2 ;
	cout << "or of two no is : " << output_num << endl; 
	
	// not operator 
	output_num = ~num_1 ;
	cout << "not of first no is : " << output_num << endl;
	
	// xor operator 
	output_num = num_1 ^ num_2 ;
	cout << "xor of two no is : " << output_num << endl;
	
	// left shift operator 
	output_num = num_1 << 2 ;
	cout << "value after left shifting second number by 2 : " << output_num << endl;
	
	// right shift operator 
	output_num = num_2 >> 2 ;
	cout << "value after right shifting second number by 2 : " << output_num << endl;
}  
