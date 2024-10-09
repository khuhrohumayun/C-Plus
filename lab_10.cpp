#include<iostream>

	using namespace std;
	
//	bool isOdd(int n);
//	bool isEven(int n);
//	
//	
//	bool isOdd(int n){
//		if(n == 0){
//			return false;
//		}else{
//			return isEven(n-1);
//		}
//	}	
//	
//	bool isEven(int n){
//		if(n == 0){
//			return true;
//		}else{
//			return isOdd(n-1);
//		}
//	}
	



// sum of numbers
//	int sum(int n){
//		if(n>0){
//			return n + sum(n-1);
//		}else{
//			return 0;
//		}
//	}



	//find factorial using recursion
	double factorial(int num){
		if(num <=1 ){
			return 1;
		}else{
			return  num * factorial(num-1);
		}
	}
	
	
	// fibonocci
//	int fibonacci(int num){
//		if(num ==0){
//			return 0;
//		}else if(num == 1){
//			return 1;
//		}else{
//			return fibonacci(num-1) + fibonacci(num-2);
//		}
//	}
	
	
	
	
	
	int main()
	{
		int num;
		
		cout << "Enter a number to print Fibonacci series: ";
		cin >> num;
		
		
		
//		for(int i=0; i<num; i++){
//			cout << fibonacci(i) << " " ;
//		}
//		cout << endl;
		
//		if(isEven(num)){
//			cout << num << " is Even" << endl; 
//		}else{
//			cout << num << " is Odd" << endl;
//		}
		
		double result = factorial(num);
		
		
		cout << "The factorial of " << num << " is:" << result; 
		
		
//		int resultt = sum(num);
//		cout << resultt;


		//cout << "The fibonacci of " << " is:" << result;
		
		
	return 0;
	}

