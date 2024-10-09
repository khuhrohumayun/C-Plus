#include<iostream>

	using namespace std;
	
	int main(){
		
		
		int numRows;
		
		cout << "Enter number of Rows to generate a Pyramid: ";
		cin >> numRows;
		
		for(int i=1; i<=numRows; i++){
			
			//Print Spaces
			for(int j=i; j< numRows; j++){
				cout << " ";
			}
			
				//print star
				for(int k=1; k<=2 * i -1; k++){
					cout << "*";
				}
				
				//move to the next line
				cout << "\n";
			}
		
		
		
		
		
		return 0;
	}
