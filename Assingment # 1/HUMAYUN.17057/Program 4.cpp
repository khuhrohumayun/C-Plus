#include<iostream>

	using namespace std;
	
	
				// SIMPLE INTEREST CALCULATION 
	
	
	
	
	// USING FUNCTION WITH RETURN VALUES, FOR CALCULATE SIMPLE INTEREST
	float calculateSimpleInterest(float principal, float rate, float time){
		
		return (principal * rate * time) / 100;
	}
	
	
	int main(){
		
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
		
		
		
		return 0;
	}
