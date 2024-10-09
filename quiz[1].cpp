#include <iostream>
#include <string>

using namespace std;

// Global variables to store user data
int RegNumber;
string Name;
int Age;
string ContactNumber;

// Function to input user data
void biodata()
{
	cout << "\t<===============>\n";
	cout << "\t   Bios Data\n";
	cout << "\t<===============>\n";
	
	
    cout << "Enter the name: ";
    cin >> Name;
    
    cout << "Enter the reg number: ";
    cin >> RegNumber;
    
    cout << "Enter the age: ";
    cin >> Age;
    
    cout << "Enter the contact number: ";
    cin >> ContactNumber;
    
}


void checkRegID(int regID)
{
    if (regID == RegNumber)
    {
    	cout << "<<===================================>>\n";
        cout << "Name: " << Name << endl;
        cout << "Reg Number: " << RegNumber << endl;
        cout << "Age: " << Age << endl;
        cout << "Contact Number: " << ContactNumber << endl;
    }
    else
    {
        cout << "Please register your account." << endl;
    }
}

int main()
{
    biodata(); // Get the user data
    
    int searchID;
    cout << "Enter the Register number: ";
    cin >> searchID;
    
    checkRegID(searchID); 
    
    return 0;
}
