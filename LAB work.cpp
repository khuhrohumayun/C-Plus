#include<iostream>
#include<cmath>
	
	using namespace std;
	
//	double add(double num1, double num2){
//		return num1 + num2;
//	}
//	
//	double sub(double num1, double num2){
//		return num1 - num2;
//	}
//	
//	double multiply(double num1, double num2){
//		return num1 * num2;
//	}
//	
//	double division(double num1, double num2){
//		if(num2 == 0){
//			cout << "zero not division!";
//		}else{
//		
//				return num1 / num2;
//	}
//}
//
//	double sin(double num1){
//		return sin(num1);
//	}
//	


void thousand(){
	cout << "Your withdraw 1 thousand: ";
}

void twothousand(){
	cout << "Your withdraw 2 thousand: ";
}

void threethousand(){
	cout << "Your withdraw 3 thousand: ";
}

void fourthousand(){
	cout << "Your withdraw 4 thousand: ";
}

void fivethousand(){
	cout << "Your withdraw 5 thousand: ";
}



	int main(){
		
			cout << "\t ATM \n";
		
		
	int select;
	int password;
	double amount;
	
	cout << "Enter password: ";
	cin >> password;
	
	if(password == 1234){
		
		cout << "1. 1000: " << endl;
		cout << "2  2000: " << endl;
		cout << "3. 3000: " << endl;
		cout << "4. 4000: " << endl;
		cout << "5. 5000";
		cin >> select;
		switch(select){
			case 1:
				thousand();
				break;
				
			
			case 2:
				twothousand();
				break;
				
				
			case 3:
				threethousand();
				break;
				
				
				
			case 4:
				fourthousand();
				break;
				
		}
	}else{
		cout << "Incorrect password";
	}
	
	
		
		
//		cout << "\t Simple Calculator: \n ";
//		
//		double num1,num2;
//		int choice;
//		double result;
//				
//		cout << "Enter 1 for sum of numbers: " << endl;
//		cout << "Enter 2 for subtract of numbers: " << endl;
//		cout << "Enter 3 for multiplication fo numbers: " << endl;
//		cout << "Enter 4 for division of numbers: " << endl;
//		cout << "Enter 5 to calculate an angle: " << endl;
//		
//		cin >> choice;
//		
//		cout << "Enter first number: ";
//		cin >> num1;
//		cout << "Enter second number: ";
//		cin >> num2;
//		
//		
//		switch(choice){
//			case 1:
//				result = add(num1,num2);
//				break;
//			
//			case 2:
//				result = sub(num1,num2);
//				break;
//			
//			case 3:
//				result = multiply(num1,num2);
//				break;
//				
//			case 4:
//				result = division(num1,num2);
//				break;
//				
//			case 5:
//				result = sin(num1);
//				break;
//				
//			default:
//				cout << "Invalid operation";
//				
//		}
//		
//		cout << "Result: " << result;
		
		return 0;
	}

