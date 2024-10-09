#include<iostream>

	using namespace std;
	
	
	
	int main(){
		
		
		int num;
		
		cout << "Enter number to print a shape: ";
		cin >> num;
		
		
		//upper half
		for(int i=1; i<=num; i++){
			//space
			for(int j=i; j<=num -1; j++){
				cout << " ";
			}
			for(int k=1; k<=2* i-1; k++){
				cout << "*";
			}
			cout << "\n";
		}
		
		
		//lower half
		
		for(int i=num; i>=1; i--){ 
		
			//space
			for(int j=i; j<=num-1; j++){
				cout << " ";
			}
			
			for(int k=1; k<=2 * i - 1; k++){
				cout << "*";
			}
			
			cout << "\n";
		}
		
		
		
		
//		int num;
//		
//		cout << "Enter a number to print number pyramid: ";
//		cin >> num;
//		
//		for(int i=1; i<=num; i++){
//			//space
//			for(int j=i; j<=num; j++){
//				cout << " ";
//			}
//			
//			//1st half
//			for(int j=i; j>=1; j--){
//				cout << j;
//			}
//			
//			//2nd half
//			for(int j=2; j<=i; j++){
//				cout << j;
//			}
//			cout << "\n";
//		}
	
		
		
		
		
		
		
		
		
		// Number print in pyramid
		
		
//		int num;
//		
//		cout<< "Enter number to print pyramid: ";
//		cin >> num;
//		
//		for(int i=1; i<=num; i++){
//			//space
//			for(int j=1; j<=num-i; j++){
//				cout << " ";
//			}
//			for(int k=1; k<=i; k++){
//				cout << i << " ";
//			}
//			cout << "\n";
//		}
		
		
		
		
		return 0;
	}
