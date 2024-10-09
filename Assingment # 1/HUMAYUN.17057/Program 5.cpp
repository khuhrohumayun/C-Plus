#include<iostream>

	using namespace std;
	
	
	int main(){
		
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
		
		
		
		
		
		return 0;
	}
