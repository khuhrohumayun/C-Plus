#include<iostream>

	using namespace std;
	
	
//	int factorial(int n){
//		if(n == 0 || n == 1){
//			return 1;
//		}else{
//			return n * factorial(n - 1);
//		}
//	}
//	
//	


	int sum(int num){
		if(num > 0){
			return num + sum(num -1);
		}else{
			return 0;
		}
	}

	// function prototype
	bool isEven(int n);
	bool isOdd(int n);
	
	
	//function to check if a number is even
	bool isEven(int n){
		if(n == 0){
			return true;
		}else{
			return isOdd(n-1);
		}
	}
	
	
	//function to check if a number is odd
	bool isOdd(int n){
		if(n==0){
			return false;
		}else{
			return isEven(n-1);
		}
	}
	
	
	
	
	
	// fibonacci series
	
	double fibonacci(int n){
		if(n==0){
			return 0;
		}else if(n==1){
			return 1;
		}else{
			 return fibonacci(n -1) + fibonacci(n-2);
		}
	}
	int main(){
		
//		int num;
//		
//		
//		cout << "Enter a number: ";
//		cin >> num;
//		
//		if(isEven(num)){
//			cout << num << " is even." << endl;
//		}else{
//			cout << num << " is Odd." << endl;
//		}
//		
		
		
//		int num;
//		
//		cout << "Enter number: ";
//		cin >> num;
//		
//		
//		int result = factorial(num);
//		
//		cout << "Factorail of " << num << " is: " << result;
//		
		
		int num;
		
		cout << "Enter number: ";
		cin >> num;
		
		int result = sum(num);
		cout << result;
		
		
		
		return 0;
	}
