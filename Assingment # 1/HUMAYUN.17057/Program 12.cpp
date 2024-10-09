#include<iostream>
#include<cmath>

	using namespace std;
	
	
	int main(){
		
					// CALCULARE AREA AND CURCUMFERENCE OF CIRCLE
					
					
					
		// DECLARE VARIABLE TO STORE THE RADIUS OF CIRCLE
		double radius;
		
		double area,circumference;
		
		// PROMPT USER FOR INPUT
		cout<< "Enter the radius of circle: ";
		cin >> radius;
		
		
		// UNDER LINE
		cout << "__________________________________" << "\n";
		
		// CALCULATE AREA AND CIRCUMFERENCE OF CIRCLE
		area = M_PI * radius * radius;
		circumference = 2 * M_PI * radius;
		
		
		// PRINT THE AREA AND CIRCUMFERENCE
		cout << "Area of circle is: " << area << "\n";
		cout << "Circumference of the circle is: " << circumference;					
			
		
		
		return 0;
	}
