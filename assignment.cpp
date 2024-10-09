#include<iostream>

	using namespace std;
	
	
	int main(){
		
				// Code to generate table of number, square and cube using for loop.
		
		
		
		cout << "Number \t \t";
		cout << "Square \t \t";
		cout << "Cube \t \t" "\n";
		
		cout << "__________________________________________________________" << "\n";
		
		
		for (int i=1; i<=10; i++){
			
			int square = i * i;
			int cube = i * i * i;
			cout << i << "\t\t" << square << "\t\t" << cube << "\n";
		}
		
		
		
		
		
		
		
		return 0;
	}
