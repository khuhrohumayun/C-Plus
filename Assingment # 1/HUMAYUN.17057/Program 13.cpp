#include<iostream>
#include<cmath>

	using namespace std;
	
	
	int main(){
		
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
		
		
		return 0;
	}
