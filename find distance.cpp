#include<iostream>
#include<cmath>

	using namespace std;
	
	
	int main(){
		
		
		double x1,y1, x2,y2;
		
		cout << "Enter the cordinates of the first point (x1, y1): ";
		cin >> x1 >> y1;
		cout << "Enter the codinates of the second point (x2, y2): ";
		cin >> x2 >> y2;
		
		
		// formula
		
		double distance = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2));
		
		
		
		cout << "The distace between two points is: " << distance;
		
		
		
		return 0;
	}
