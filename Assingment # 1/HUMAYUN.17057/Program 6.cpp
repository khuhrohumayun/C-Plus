#include<iostream>

	using namespace std;
	
	
	int main(){
		
				// MULTIPLICATION TABLE USING FOR LOOP 
				
				
			// DECLARE VARIABLE TO STORE TABLE NUMBER
			int number;
			
			// PROMPT USER FOR INPUT
			cout << "Enter table number to ganerate: ";
			cin >> number;
			
			
			// UNDER LINE
			cout << "______________________________" << "\n";
			
			
			// USING FOR LOOP TO GENERATE TABLE
			for(int i=1; i<=10; i++){
				
				// PRINT TABLE 
				cout << number << " x " << i << " = " << number * i << "\n";
			}
		
		
		
		return 0;
	}
