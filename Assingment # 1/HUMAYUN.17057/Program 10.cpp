#include<iostream>

	using namespace std;
	
	
			// PYRAMID OF STARS
		
		
	// FUNCTION WITH RETURN VALUE, TO GENERATE PYRAMID 
	void printPyramid(int rows){
		for(int i=1; i<=rows; i++){
			// PRINT SPACE
			for(int j=i; j<=rows-1; j++){
				cout << " ";
			}
			for(int k=1; k<=2*i-1; k++){
				cout << "*";
			}
			cout << "\n";
		}
	}
	
	
	
	
	int main (){
		
		// DECLARE VARIABE TO STORE NUMBER OF ROWS
		int rows;
		
		// PROMPT USER FOR INPUT
		cout << "Enter number of rows to generate pyramid: ";
		cin >> rows;
		
		
		// CALL OF FUNCTION
		printPyramid(rows);
		
		
		return 0;
	}
