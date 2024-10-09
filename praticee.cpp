#include<iostream>

	using namespace std;
	
	
	int main(){
		
		
//		int num;
//		
//		cout<< "Enter a number to draw pattern: ";
//		cin >> num;
//		
//		//upper half
//		
//		for(int i=1; i<=num; i++){
//			
//			//sapce
//			for(int j=i; j<=num-1; j++){
//				cout << " ";
//			}
//			for(int k=1; k<=2*i-1; k++){
//				cout << "*";
//			}
//			
//			cout << "\n";
//		}
//		
//		
//		//lower half
//		
//		for(int i=num; i>=1; i--){
//			
//			//space
//			for(int j=i; j<=num-1; j++){
//				cout<< " ";
//			}
//			for(int k=1; k<=2*i-1; k++){
//				cout << "*";
//			}
//			cout << "\n";
//		}
//		




			// PRINT NUMBERS IN PYRAMID
			
			
//			int num;
//			cout<< "Enter number to print number pyramid: ";
//			cin >> num;
//			
//			for(int i=1; i<=num; i++){
//				
//				//space
//				for(int j=i; j<=num-1; j++){
//					cout << " ";
//				}
//				for(int k=1; k<=i; k++){
//					cout << k << " ";
//				}
//				cout << "\n";
//			}
//		

				// PRINT REVERCE NUMBERS IN PYRAMID
		
		int num; 
		cout << "Enter number to print revece pyramid: ";
		cin >> num;
		
		for(int i=num; i>=1; i--){
			
			//space 
			for(int j=i; j<=num-1; j++){
				cout<< " ";
			}
			for(int k=1; k<=i; k++){
				cout << k << " ";
			}
			cout << "\n";
		}
		



//		int n,m;
//		
//		cout << "Enter 1st number: ";
//		cin >> n;
//		cout << "Enter 2nd number: ";
//		cin >> m;
//		
//		
//		for(int i=1; i<=n; i++){
//			//inner loop
//			for(int j=1; j<=m; j++){
//				cout<< "*";
//			}
//			cout << "\n";
//		}


		
		

		
		return 0;
	}
