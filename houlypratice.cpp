#include<iostream>
	
	using namespace std;
	
	
	
	int main(){
		
		
				// CALCULATING FACTORAIL
				
				
//		int num;
//		float factorial =1;
//		cout << "Enter a number: ";
//		cin >> num;
//		
//		for(int i=1; i<=num; i++){
//			factorial *= i;
//		}
//		
//		cout << "Factorail of given number is: " << factorial;
//		



			// Multiplicaton table
			
			
//		int num;
//		
//		cout << "Enter number of table to print: ";
//		cin >> num;
//		
//		
//		for(int i=1; i<=10; i++){
//			cout << num << " x " << i << " = " << i*num << "\n";
//		}



			// POWER CLACULATING USING FOR LOOP
			
			
//		int base,exponent;
//		int result = 1;
//		
//		
//		cout << "Enter base: ";
//		cin >> base;
//		cout << "Enter exponent: ";
//		cin >> exponent;
//				
//		for(int i=1; i<=exponent; i++){
//			result *= base;
//		}
//		
//		cout << base << " raised to power of " << exponent << " is: " << result;
		
		
		
			// RIGHT-HANDED TRIANGLE 
			
			
//		int rows;
//		
//		cout << "Enter rows to print triangle: ";
//		cin >> rows;
//		
//		
//		for(int i=rows; i>=1; i--){
//			for(int j=1; j<=i; j++){
//				cout << "*";
//			}
//			cout << "\n";
//		}
		
		
		
		
				// PYRAMID 
				
				
//		int rows;
//		
//		cout << "Enter rows to print pyramid: ";
//		cin >> rows;
//		
//		for(int i=1; i<=rows; i++){
//			//space
//			for(int j=i; j<=rows-1; j++){
//				cout << " ";
//			}
//			for(int k=1; k<=2*i-1; k++){
//				cout << "*";
//			}
//			
//			cout << "\n";
//		}




			// 	SIMPLE INTREST CALCULATING 
			
			
//		float principal,rate,time;
//		
//		cout << "Enter principal amount: ";
//		cin >> principal;
//		cout << "Enter rate: ";
//		cin >> rate;
//		cout << "Enter time: ";
//		cin >> time;
//		
//		
//		float interest = (principal * rate * time) /100;
//		
//		
//		cout << "The simple interest is: " << interest;



			// SUM OF EVEN NUMBER 
			
			
//		int limit;
//		int sum = 0;
//		
//		cout << "Enter a number to calculate the sum of even numbers: ";
//		cin >> limit;
//		
//		for(int i=2; i<=limit; i+=2){
//			sum += i;
//		}
//		
//		cout << "The sum of even numbers up to " << limit << " is " << sum;



		
		int num,square = 0;
		
		
		cout << "Enter a number: ";
		cin >> num;
		
		for(int i=0; i<=num; i++){
			square += i;
		}
		
		cout << "Square of " << num  << " is " << square;
		
		return 0;
	}
