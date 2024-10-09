#include <iostream>


	using namespace std;
	
	
	int main(){
		
		
		int number[2][3];
		
		
		cout << "Enter 6 numbers: " << endl;
		
		
		// stroring user input in the array
		for(int i=0; i<2; i++){
			for(int j=0; j<3; j++){
				cin >> number[i][j];
			}
		}
		
		cout << "The numbers are: " << endl;
		
		
		// printing array always
		
		for(int i=0; i<2; i++){
			for(int j=0; j<3; j++){
				cout << "numbers[" << i << "][" << j << "]: " << number[i][j];
			}
		}
		
		
		return 0;
	}
