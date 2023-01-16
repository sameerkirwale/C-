#include <iostream>
using namespace std ;

// This code prints all the duplicate elements in array 

int main () {
	
	int arr [ 100 ], size_array ; 
	
	cout << "Enter the size of Array : " ;
	cin >> size_array ;
	
	cout << "Enter the elements in Array : " ;
	for ( int i = 0 ; i < size_array ; i ++ ) {
		
		cin >> arr [ i ] ;
	}
	
	cout << "The elements in Array are : " ;
	for ( int i = 0 ; i < size_array ; i ++ ) {
		
		cout << arr [ i ] << " " ;
	}
	
	cout << "\nThe duplicate elements in Array are : " ;
	for ( int i = 0 ; i < size_array ; i ++ ) {
		
		for ( int j = i + 1 ; j < size_array ; j ++ ) {
			
			if ( arr [ i ] == arr [ j ] ) 
				cout << arr [ i ] << " " ;
		}
	}
}
