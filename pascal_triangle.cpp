#include <iostream>
using namespace std ;

//Pascal's Triangle 
int main () {
	int n_rows , i = 1 ;
	cout << " Enter the no. of rows you want : " ;
	cin >> n_rows ;
	cout << " \n" ;
	while ( i <= n_rows ) {
		int spaces = n_rows - i ;
		while ( spaces ) {
			cout << " " ;
			spaces -- ;
		}
		int j = 1 ;
		while ( j <= i ) {
			cout << j ;
			j ++ ;
		}
		j -= 2 ;
		while ( j >= 1 ) {
		    cout << j ;
		    j -= 1 ;
		}
		cout << " \n" ;
		i++ ;
	}
}
