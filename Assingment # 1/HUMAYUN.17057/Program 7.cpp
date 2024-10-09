#include<iostream>

	using namespace std;
	
	
	int main(){
		
				// POWER CALCULATION USING FOR LOOP
				
				
				
			// DECLARE VARIABLE TO STORE BASE AND EXPONENT VALUE
			int base,exponent;
			int result = 1;
			
			
			// PROMPT USER FOR INPUT
			cout << "Enter base: ";
			cin >> base;
			cout << "Enter exponent: ";
			cin >> exponent;
			
			
			// PRINT UNDER LINE
			cout << "_____________________________" << "\n";
			
			// FOR LOOP TO CALCULARE BASE
			for(int i=1; i<=exponent; i++){
				result *= base;
			}
			
			
			// PRINT RESLUT OF BASE AND EXPONENT
			cout << base  << " raised to the power of "<< exponent << " is " << result;
		
		
		
		return 0;
	}
