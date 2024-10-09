#include<iostream>
	
		using namespace std;


//	void myFunction(){
//		cout << "M.Humayun";
//	}
	

//		void pyramid(int num){
//			
//			for(int i=1; i<=num; i++){
//				for(int j=i; j<=num-1; j++){
//					cout << " ";
//				}
//				for(int k=1; k<=2*i-1; k++){
//					cout << "*";
//				}
//				cout << "\n";
//			}
//		}
		
		
//		void rightTriangle(int num){
//			
//			for(int i=1; i<=num; i++){
//				for(int j=1; j<=i; j++){
//					cout << i;
//				}
//				cout << "\n";
//			}
//		}
		
		
		void mountain(int num){
			
			char print;
			bool check = true;
			
			while(check){
				
			cout << "Print pyramid press 'p' and in reverse press 'r' (p/r): ";
			cin >> print;
			
			
			switch(print){
				case 'p':
			for(int i=1; i<=num; i++){
				for(int j=i; j<=num-1; j++){
					cout << " ";
				}
				for(int k=1; k<=2*i-1; k++){
					cout << "*";
				}
				cout << "\n";
			}
			break;
			
			case 'r':
					
			for(int i=num; i>=1; i--){
				for(int j=i; j<=num-1; j++){
					cout << " ";
				}
				for(int k=1; k<=2*i-1; k++){
					cout << "*";
				}
				cout << "\n";
			}
			
			default: 
				cout << "Please select correct key work to print!" << endl;
		
			char choise;
			cout << "Do you want to print again (y/n): ";
			cin >>choise;
			
			if(choise != 'y' && choise != 'Y'){
				check = false;
			}
		}
		
		
	}
			}
		
//		void revercePyramid(int num){
//			for(int i=num; i>=1; i--){
//				for(int j=i; j<=num-1; j++){
//					cout << " ";
//				}
//				for(int k=1; k<=2*i-1; k++){
//					cout << "*";
//				}
//				cout << "\n";
//			}
//		}
		
		
		
		int main(){
			
			int num;
			
			cout << "Enter number to print pyramid: ";
			cin >> num;
			
		//	pyramid(num);
			
		//	rightTriangle(num);
			
//			myFunction();
			
			mountain(num);
			
			
			
		//	revercePyramid(num);
		return 0;
		}


