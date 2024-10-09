#include<iostream>
#include<string>

	using namespace std;
	
	
	int main(){
		
				
				// STRING MANIPULATION 
				
				
			// DECLARE VARIABLE TO STORE FIRST AND LAST NAME
			string firstName,lastName;
			
			
			// PROMPT USER FOR INPUT
			cout << "Enter First Name: ";
			cin >> firstName;
			cout << "Enter Last Name: ";
			cin >> lastName;
			
			
			
			// CUMBINE FIRST AND LAST NAME IN FULL NAME;
			string fullName = firstName + " " + lastName;
			
			
			// USING FUNTION LENGTH TO FIND LENGTH OF FULL NAME
			int length = fullName.length();
			
			
			// PRINT UNDER LINE
			cout << "______________________________________" << "\n";
			
				// PRINT FULL NAME
				cout << "Full name: " << fullName << "\n";
				
				// PRINT LENGTH OF FULL NAME
				cout << "Length of Full name is: "<< length;
			
				
		
		
		
		
		
		return 0;
	}
