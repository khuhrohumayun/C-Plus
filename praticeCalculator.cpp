#include<iostream>
#include<cmath>

	using namespace std;
	
	
	int main(){
		
//		bool calculator = true;
//		double num1,num2;
//		char opr;
//		
//		
//		while(calculator){
//			cout << "Enter operator: (+,-,*,/) \n s (sin) \n c (cos) \n t (tan) \n l (log) \n e (exp) \n q (square root): " << endl;
//			cin >> opr;
//			
//			
//			
//			switch(opr){
//				case '+':
//					cout << "Enter first number: ";
//					cin >> num1;
//					cout << "Enter second number: ";
//					cin >> num2;
//					cout << "Result: " << num1+num2 << endl;
//					break;
//					
//				case '-':
//					cout << "Enter first number: ";
//					cin >> num1;
//					cout << "Enter second number: ";
//					cin >> num2;
//					cout << "Result: " << num1-num2 << endl;
//					break;
//					
//				case '*':
//					cout << "Enter first number: ";
//					cin >> num1;
//					cout << "Enter second number: ";
//					cin >>  num2;
//					cout << "Result: " << num1*num2 << endl;
//					break;
//					
//				case '/':
//					cout << "Enter first number: ";
//					cin >> num1;
//					cout << "Enter second number: ";
//					cin >> num2;
//					if(num2 != 0)
//						cout << "Result: " << num1 / num2 << endl;
//					else
//						cout << "Error: Division zero! ";
//					break;
//					
//				case 's': //sine
//					cout << "Enter an angle in radius: ";
//					cin >> num1;
//					cout << "Result: " << sin(num1) << endl;
//					break;
//					
//				case 'c': // cosine
//					cout << "Enter an angle in radius: ";
//					cin >> num1;
//					cout << "Result: " << cos(num1) << endl;
//					break;
//					
//				case 't': // Tangent
//					cout << "Enter an angle in radius: ";
//					cin >> num1;
//					cout << "Result: " << tan(num1) << endl;
//					break;
//					
//				case 'l': // Natural logrithm
//					cout << "Enter a number: ";
//					cin >> num1;
//					if(num1 > 0)
//						cout << "Result: " << log(num1) << endl;
//					else
//						cout << "Error: logrithm of non-positive number! " << endl;
//					break;
//										
//				case 'e': // exponential
//					cout << "Enter a number: ";
//					cin >> num1;
//					cout << "Result: " << exp(num1) << endl;
//					break;
//					
//				case 'q': // square root
//					cout << "Enter a number: ";
//					cin >> num1;
//					if(num1 >=0)
//						cout << "Result: " << exp(num1) << endl;
//					else
//						cout << "Error: Square root of negative number! " << endl;
//					break;
//					
//				default: 
//					cout << "Error: Invalid operation! " << endl;
//			}
//			
//			char choice;
//			cout << "Do you want to perform again (y/n): ";
//			cin >> choice;
//			
//			if(choice != 'y' && choice != 'Y'){
//				calculator = false;
//			}
//			
//		}
//		
//		cout << "Calculator has exited." << endl;



		bool again = true;
		int data;
		
		cout<< "1.Hello \n";
		cout << "2.what is date today \n";
		cout << "3.Exit \n";
		
		
		while(again){
			
			cout << "Enter number to chat with you: ";
			cin >> data;
			
			switch(data){
				case 1:
					cout << "Hi, how can i help you. \n";
					break;
				case 2:
					cout << "Date is: 08-19-2024 \n";
					break;
				case 3:
					cout << "Tanks for your chat ";
					break;
					
				default:
					cout << "Enter correct data";
				
				char check;
					
			}
			
			if()
		}
		
		
		
		
		return 0;
	}
