#include<iostream>
#include<cmath>
#define PI 3.14159


	using namespace std;
	
	
	int main(){
		
		
		
		// Table using for loop
		
//		int num,limit;
//		
//		cout << "Number to limit rows: ";
//		cin >> limit;
//		cout<< "Enter table number to generate: ";
//		cin>>num;
//		
//			for(int i=1; i<=limit; i++){
//				cout << num << " * " << i << " = " << num*i << "\n";
//			}



			// drow pyramid using nasted loop
			
			
//			int num;
//			
//			cout<< "Enter number of rows to gererate pyramid: ";
//			cin >> num;
//			
//			for(int i=1; i<=num; i++){
//				
//				// for space 
//				for(int j=i; j<=num - 1; j++){
//					cout << " ";
//				}
//				
//				for(int k=1; k<= 2 * i - 1; k++){
//					cout << "*";
//				}
//				
//				cout << "\n";
//			}
		
		
		
						// Calculate factorial
						
//				int num,factorial=1;
//				
//				cout<< "Enter number to find its factorial: ";
//				cin>> num;
//				
//				for(int i=1; i<=num; i++){
//					factorial *= i;
//				} 
//				
//				cout<< "Factorial of " << num << "=" << factorial << "\n";


						
						
						
						// Calculate first 10 natural number 
						
						
//				int num,sum=0;
//				
//				cout << "Find the first 10 natural number: ";
//				cin >> num;
//				
//				for(int i=1; i<=num; i++){
//					sum += i;
//				}
//				
//				cout << "Sum of "<< num << "natural number is: " << sum << "\n";



					
					// Calculate square root
					
//					double number;
//					double square = 0.0;
//					
//					cout<< "Enter a number: ";
//					cin >> number;
//					
//					if(number < 0){
//						cout << "Square root of a negative number is not a real number."<<"\n";			
//					}else{
//						for(double i=0; i*i <=number; i+= 0.001){
//							square = i;
//						}
//						
//						cout << "Approximate square root of "<< number << " = "<< square << "\n";
//					}



							
						// Calculate Square 
						
						
//						int num,square=0;
//						
//						
//						cout<< "Enter a number: ";
//						cin >> num;
//						
//						for(int i=1; i<=num; i++){
//							square += num;
//						}
//						
//						cout << "Square of " << num << " = " << square << "\n";






						// Calculate Cube
						
						
						int num,cube=1;
						
						cout<< "Enter a number: ";
						cin >> num;
						
						for(int i=1; i<=3; i++){
							cube *= num;
						}
						
						cout << "Cube of " << num << " = " << cube << "\n";






					// Calsius to fahrenheit
					
					
//					float celsius,fahrenheit;
//					
//					cout<< "Enter tempreture in Celsius: ";
//					cin>> celsius;
//					
//					fahrenheit = (celsius * 9/5) + 32;
//					
//					
//					cout<< "Tempereture in fahrenheit is: "<< fahrenheit << "\n";
					
					
					
					
					// Find area and circumference of Circle
					
					
//					float radius,area,circumference;
//					
//					cout<< "Enter radius of Circle: ";
//					cin >> radius;
//					
//					area = PI * radius * radius;
//					
//					circumference = 2 * PI * radius;
//					
//					
//					cout << "Area of Circle is: " << area << "\n";
//					cout << "Circumference of the Circle is: "<< circumference;
		
		
		
		
			// Reverse pyramid
		
		
//			int num;
//			
//			cout << "Enter number of Rows to print pyramid: ";
//			cin >> num;
//			
//			for(int i=num; i>=1; --i){
//				
//				//print space
//				for(int j=num; j>=i-1; j--){
//					cout << " ";
//				}
//				for(int k=2*i-1; k>=1; k--){
//					cout << "*";
//				}
//				cout << "\n";
//			}




//			int num;
//			cout << "Enter number of rows to print pyramid: ";
//			cin >> num;
//			
//			for(int i=1; i<=num; i++){
//				
//				//print space
//				for(int j=i; j<=i-1; j++){
//					cout << " ";
//				}
//				for(int k=1; k<= 2 * i -1; k++){
//					cout << "*";
//				}
//				
//				cout << "\n";
//			}
		
		
		return 0;
	}
