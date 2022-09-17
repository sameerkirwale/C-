#include <iostream>
using namespace std ;

int main () {
	int n_rows , i = 1 ;
	cout << "Enter the no. of rows you want : " ;
	cin >> n_rows ;
	while ( i <= n_rows ) {
		int j = 1 ;
		int value = n_rows + 1 - i ; 
		while ( j <= value ) {
			cout << j ;
			j++ ;
		}
		int stars = ( i - 1 ) * 2 ;
		while ( stars >= 1 ) {
			cout << "*" ;
			stars -= 1 ;
		}
		j -= 1 ;
		while ( j >= 1 ) {
			cout << j ;
			j -= 1 ;
		}
		cout << "\n" ;
		i++ ;
	}
}
