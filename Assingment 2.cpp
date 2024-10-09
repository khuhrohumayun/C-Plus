#include<iostream>
#include<conio.h> // i use conio.h library for getch funtion

	using namespace std;

	
	int main(){
	
	/*
		
				// FIND FACTORIAL USING WHILE LOOP
		
		
		// DECLARE VARIABLE
		int num;
		int i =1;
		float fac = 1;
		
		// PROMPT USER FOR INPUT
		cout << "Enter a number to find factorial: ";
		cin >> num;
		
		
		// USE WHILE TO CALCULATE FACTORIAL
		while(i<=num){
			fac *= i;
			i++;
		}
		
		// PRINT NUMBER OF FACTORAIL	
		cout << "Factorail of " << num << " is: " << fac;
		
	*/
	
	
	
	
	
				// 	WHEN I PRESS '.', 'ESC' OR ENTER TO STOP PROGRAM
				
				
				
				// DECLARE VARIABLE FOR STORE NUMBERS
				int num1,num2;
				
				// DECLARE VARIABLE FOR SUM OF NUMBERS
				double sum;
				
				char check;
				
				
				while(true){
					
					
					// PROMPT USER FOR INPUT
					cout << "Enter the first number: ";
					cin >> num1;
					
					cout << "Enter the second number: ";
					cin >> num2;
					
					
					// SUM OF NUMBERS
					sum = num1+num2;
					// PRINT SUM
					cout << "SUM OF NUMBERS IS: " << sum << "\n";
				
					// UNDER LINE
					cout << "__________________________________________ \n";
				
					// I USE GETCH FUNCTION FOR PRESS . ESC OR ENTER TO STOP THE PROGRAM
					cout << "PRESS '.' , 'ESC' OR 'ENTER' TO STROP THE PROGRAM: " << endl;
      				check = _getch();
					
					
					// CHECKING CONDITION IF IT'S TRUE THAN STOP 
					if(check == '.' || check == 27 || check == 13){
						break;
					}
				}
				
				// FINAL SUM OF NUMBERS
				cout << "Final sum " << sum;
			
		
	
	
		
		return 0;
	}
