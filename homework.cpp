#include<iostream>
#include<conio.h>

	using namespace std;
	
	
	int main(){
		
		int num1,num2;
		
		char check;
		
		double sum;
		
		
		while(true){
			
			cout << "Enter first number: ";
			cin >> num1;
			
			cout << "Enter second number: ";
			cin >> num2;
			
			sum = num1+num2;
			
			cout << "The sum of nubers is: " << sum << endl;
			
			cout << "To stop the program please press (Enter/ . / Esc): ";
			check = _getch();
			
			
			if(check == 27 || check == 13 || check == '.'){
				break;
			}
			
		}
		
		
		
		
		
		return 0;
	}
