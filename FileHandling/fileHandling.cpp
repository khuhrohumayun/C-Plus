#include<iostream>
#include<fstream>


	using namespace std;
	
	
	int main(){
		
//		string std = "Hi sir how are you!";
//		
//		ofstream out("demo.txt"); // write operation
//		out << std;
		
		
		
		// for reading 
		
		string bio;
		
		ifstream in("demo2.txt");
		getline(in, bio);
		
		cout << bio;
		 
		
		
		return 0;
	}
