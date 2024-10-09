#include<iostream>

	using namespace std;
	
	
	int main(){
		
				// FACTORIAL CALCULATION USING A FOR LOOP
				
				
			// DECLARE VARIABLE TO STORE NUMBER
			int number;
			
			
			// DECLARE VARIABLE AND GIVEN VALUE 1, BEACUSE MINUS HAVE NO FACTORIAL
			int factorial = 1;
			
			
			// PROMPT USER FOR INPUT
			cout << "Enter a number to find factorial: ";
			cin >> number;
			
			
			
			// USING FOR LOOP FOR FIND FACTORIAL
			for(int i=1; i<=number; i++){
				
				factorial *= i;
			}
			
			
			// PRINT FACTORIAL NUMBER
			cout << "The Factorial of " << number << " is " << factorial;
		
		
		
		
		return 0;
	}
