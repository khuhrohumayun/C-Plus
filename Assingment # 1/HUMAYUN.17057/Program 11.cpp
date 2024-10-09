#include<iostream>
#include<cmath>

	using namespace std;
	
	
	int main(){
		
		
				// CLACULATE THE HYPOTENUSE OF A RIGHT-ANGLED TRIANGLE
				
				
		// DECLARE VARIABLES TO STORE LENGTHS OF TWO SIDES
		double side1,side2;
		
		
		// PROMPT USER FOR INPUT
		cout << "Enter the first side of right-angled triangle: ";
		cin >> side1;
		cout << "Enter the second side of right-angled triangle: ";
		cin >> side2;
		
		
		// CALCULATE THE LENGHT OF THE HYPOTENUSE USING THE PYTHAGOREAM THEOREM
		double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
		
		// PRINT THE CALCULATED HYPOTENUSE
		cout << "The length of the hypotenuse is: " << hypotenuse;
		
		
		return 0;
	}
