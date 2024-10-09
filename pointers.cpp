#include<iostream>

	using namespace std;
	
	const int Max = 3;
	
	int main(){
		
		/*
		int a = 12;
		
		int *b;
		
		b = &a;
		
		// & ----> (Adress of) Operator
		cout << "The address of a is " << &a << endl;

		
		// * ----> (value at) Deference operator
		cout << "The value of address at b is " << *b << endl;
		
		
		
		//pointer to pointer
		int **c = &b;
		cout << "The address of b is " << &b << endl;
		cout << "The address of b is " << c << endl;
		cout << "The value of address at c is " << *c << endl;
		cout << "The value at address value_at(value_at(C)) "<< **c;
				
		*/
		
		
//		int var[Max] = {45,66,77};
//		int *ptr; 
//		
//		ptr = var;
//		
//		for(int i=0; i<Max; i++){
//		
//			cout << "Address of var[" << i << "] = ";
//			cout << ptr << endl;
//			
//			cout << "Value of var[" << i << "] = ";
//			cout << *ptr << endl;
//			
//			ptr++;
//
//}
		
		
		
		
		int arr[Max] = {55, 77, 235};
		int *ptr = arr;
		
		
		for(int i=Max; i>0; i--){
			cout << "Address of var[" << i << "] = ";
			cout << ptr << endl;
			
			cout << "Value of var[" << i << "] = ";
			cout << *ptr << endl;
			
			ptr++;
		} 
		
		
		
		
		
		
		
		
		
		
		
		
		return 0;
	}
