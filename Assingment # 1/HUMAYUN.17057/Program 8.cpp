#include<iostream>

	using namespace std;
	
	
					// RIGHT-ANGLED TRIANGLE
	
	
	
	// USING FUNCTION WITH RETURN VALUE,TO PRINT TRIANGLE
	void printTriangle(int rows){
		for(int i=1; i<=rows; i++){
			// INSIDE LOOP
			for(int j=1; j<=i; j++){
				cout << "*";
			}
			cout << "\n";
		}
	}
	
	
		int main(){
		
		
			// DECLARE VARIABLE TO STORE NUMBER OF ROWS
			int rows;
			
			// PROMPT USER FOR INPUT
			cout << "Enter number of rows to print triangle: ";
			cin >> rows;
		
		
			// CALL FUNCTION
			printTriangle(rows);
		
		
		
		
		return 0;
	}
