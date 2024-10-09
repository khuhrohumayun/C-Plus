#include<iostream>

	using namespace std;
	
		
//	// USING FUNCTION WITH RETURN VALUES, FOR CALCULATE SIMPLE INTEREST
//	float calculateSimpleInterest(float principal, float rate, float time){
//		
//		return (principal * rate * time) / 100;
//	}



//					// RIGHT-ANGLED TRIANGLE
//	
//	
//	
//	// USING FUNCTION WITH RETURN VALUE,TO PRINT TRIANGLE
//	void printTriangle(int rows){
//		for(int i=1; i<=rows; i++){
//			// INSIDE LOOP
//			for(int j=1; j<=i; j++){
//				cout << "*";
//			}
//			cout << "\n";
//		}
//	}
	
	
	
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
	
		int main(){
			
			
			/*
			
					// PROGRAM 1: STUDENT GRADES CALCULATION 
					
						
			
			   // DECLARE VARIABLE TO STORE MARKS	
			int eng,PF,math;
			
			
			// PROMPT USER FOR INPUT
			cout<< "Enter the English marks: ";
			cin >> eng;
			cout << "Enter the PF marks: ";
			cin >> PF;
			cout << "Enter the Math marks: ";
			cin >> math;

			
			// FORMULA TO CALCULATE TOTAL SUM
			int sum = eng + PF + math;
			
			// FORMULA TO CALCULATE AVERAGE
			float avg = sum / 3.0;
			
			
			//PRINT UNDERLINE
			cout << "_____________________________________" << "\n";
			
			//PRINT AVERAGE OF SUBJECT 
			cout << "The Sum of three subject is: " << sum << "\n";
			
			//PRINT AVERAGE OF SUBJECT
			cout << "The Average of three subject is: " << avg;
						
		*/
		
		
		
		
		
		
		/*
		
		
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
			
		
		*/
		
		
		
		
		/*
		
		
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
		
		*/
			
			
		
		
		/*
		
		
		
			// SIMPLE INTEREST CALCULATION 
	
	
		
		// DECLARE VARIABLE TO STORE PERTICULAR VALUE
		float principal,rate,time;
		
		
		// PROMPY USER FOR INPUT
		cout<< "Enter the principal amount: ";
		cin >> principal;
		cout << "Enter the rate of interest: ";
		cin >> rate;
		cout << "Enter the time period (in years): ";
		cin >> time;
		
		
		// DECLARE AND INITIALIZATION VARIABLE TO STORE OR CALL A FUNCTION IN IT
		float interest = calculateSimpleInterest(principal,rate,time);
		
		
		// PRINT INREREST 
		cout << "The Simple interest is: " << interest;
		
			
		*/
		
		
		
		
		
		/*
		
		
		
		
				// SUM OF EVEN NUMBER USING FOR LOOP
				
				
		// DECLARE VARIABLE TO STORE LIMIT
		int limit;
		
		int sum = 0;
		
		cout<< "Enter a number to calculate the sum of even number up to that number: ";
		cin >> limit;
		
		
		for(int i=2; i<=limit; i+=2){
			
			sum += i;
		}
		
		
		cout << "The sum of even number up to " << limit << " is " << sum;
		
		
		*/
		
		
		
		
		
		
		/*
		
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
			
			
			*/
			
			
			
			
			
			/*
			
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
		
		*/
		
		
		
		/*
		
		
				// RIGHT-ANGLED TRIANGLE
		
		
			// DECLARE VARIABLE TO STORE NUMBER OF ROWS
			int rows;
			
			// PROMPT USER FOR INPUT
			cout << "Enter number of rows to print triangle: ";
			cin >> rows;
		
		
			// CALL FUNCTION
			printTriangle(rows);
		
		*/
		
		
		
		
	
	

				// PYRAMID OF STARS
		
		
		// DECLARE VARIABE TO STORE NUMBER OF ROWS
		int rows;
		
		// PROMPT USER FOR INPUT
		cout << "Enter number of rows to generate pyramid: ";
		cin >> rows;
		
		
		// CALL OF FUNCTION
		printPyramid(rows);
		
		
	
		
		
		
		
		/*
		
		
		
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
		
		*/
		
		
		
		
		
		/*
		
		
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
			
		*/
		
		
		
		/*
		
		// CALCULATE THE EXPONENTIAL GROWTH
					
		// DECLARE VARIABLE TO STORE THE PRINCIPAL,RATE, AND TIME
		double rate,principal,time;
		
		// PROMPT USER FOR INPUT
		cout << "Enter the principal amount: ";
		cin >> principal;
		cout<< "Enter the annual interest rate (in decimal, e.g.. 0.05 for 5%): ";
		cin >> rate;
		cout << "Enter the number of years: ";
		cin >> time;
		
		// UNDER LINE
		cout << "______________________________________" << "\n";
		
		// CALCULATE THE FUTURE VALUE USING THE FORMULS
		double futureValue = principal * exp(rate * time);	
		
		// PRINT THE CALCULATED FUTURE VALUE
		cout << "The future value of the investment is: "<< futureValue;
		
		*/
		
		
		
		
		
		
			return 0;
		}
