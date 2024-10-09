#include<iostream>
#include<conio.h> // i use conio.h library for getch funtion

	using namespace std;
	
		//function for T-Shirt 
	void tShirt(int shirt_quantity, int quantity, int &totalCart){
		double tshirt_Price = 1500.0;
		if(shirt_quantity >= quantity){
			shirt_quantity -= quantity;
			totalCart += tshirt_Price * quantity;
			cout << quantity << " T-Shirt added to cart.\n";
		}else{
			cout << "Not Enough stock for T-Shirt. Only "<< shirt_quantity << " Available.\n";
		}
	}
	
	
	//function for Shoes
	void shoes(int shoes_quantity, int quantity, int &totalCart){
		double shoes_Price = 5500.0;
		if(shoes_quantity >= quantity){
			shoes_quantity -= quantity;
			totalCart += shoes_Price * quantity;
			cout << quantity << " Shoes added to cart.\n";
		}else{
			cout << "Not Enough stock for Shoes. Only " << shoes_quantity << " Available.\n";
		}
	}
	
	
	//funciton for jeans
	void jeans(int jeans_quantity, int quantity, int &totalCart){
		double jeans_Price = 1200.0;
		if(jeans_quantity >= quantity){
			jeans_quantity -= quantity;
			totalCart += jeans_Price * quantity;
			cout << quantity << " Jeans added to cart.\n"; 
		}else{
			cout << "Not Enough stock for Jeans. Only " << jeans_quantity << " Available.\n";
		}
	}
	
	
	
	//funciton to print bill
	void printBill(int totalCart){
		cout << "Total amount to pay: Rs: " << totalCart << endl;
		cout << "Thanks for shopping! " << endl;
	}
	
	
	
	int main(){

		cout<<"\t==========================="<<endl;
        cout<<"\t|SHOPPING CART AND BILLING|"<<endl;
        cout<<"\t==========================="<<endl<<endl;
	
		
		int shirt_quantity = 28;
		int shoes_quantity = 20;
		int jeans_quantity = 15;
		
		int totalCart = 0;
		int choice, quantity;
		
		
		do{
			// Manu
			cout << "  1. Buy T-Shirt (Price Rs: 1500) \n";
			cout << "  2. Buy Shoes (Price Rs: 5500) \n";
			cout << "  3. Buy Jeans (Price Rs: 1200) \n";
			cout << "  4. Print your Bill and Exit \n" << endl;
			
			cout << " Enter your Choice: ";
			cin >> choice;
			
			
			cout << "<============================================>\n";
			
			// use switch for user choice
			switch(choice){
				case 1:
					cout << "Enter quantity: ";
					cin >> quantity;
					tShirt(shirt_quantity,quantity,totalCart);
					break;
					
				case 2:
					cout << "Enter quantity: ";
					cin >> quantity;
					shoes(shoes_quantity,quantity,totalCart);
					break;
					
				case 3:
					cout << "Enter quantity: ";
					cin >> quantity;
					jeans(jeans_quantity,quantity,totalCart);
					break;
					
				case 4:
					printBill(totalCart);
					break;
					
					
				default:
					cout << "Invalid choice, please try again.\n";
			}
			
			cout << endl;
			
		}while(choice != 4);
		
	
	
		
		return 0;
	}
