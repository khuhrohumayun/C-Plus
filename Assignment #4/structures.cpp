#include<iostream>

	using namespace std;
	
	// Declare a structure named laptops
	struct laptops{
		string brand;
		string model;
		int quintity;
		int year;
		double price;
		string ram;
		string rom;
	};
	
	
	
	int main(){
		
		
		laptops Dell;
		Dell.brand = "Dell";
		Dell.model = "XPS 13";
		Dell.year = 2022;
		Dell.quintity = 55;
		Dell.price = 1200;
		Dell.ram = "16 GB";
		Dell.rom = "512GB SSD";
			
		laptops Apple;
		Apple.brand = "Apple";
		Apple.model = "MacBook Air M1";
		Apple.year = 2021;
		Apple.quintity = 25;
		Apple.price = 999;
		Apple.ram = "8 GB";
		Apple.rom = "256GB SSD";	
		
		laptops  HP;
		HP.brand = "HP";
		HP.model = "Spectre x360";
		HP.year = 2023;
		HP.quintity = 77;
		HP.price = 1300;
		HP.ram = "16 GB";
		HP.rom = "1TB SSD";
		
		
		laptops  Microsoft;
		Microsoft.brand = "Microsoft";
		Microsoft.model = "Surface Laptop 4";
		Microsoft.year = 2021;
		Microsoft.quintity = 70;
		Microsoft.price = 1100;
		Microsoft.ram = "8 GB";
		Microsoft.rom = "512GB SSD";
		
		laptops  Lenovo;
		Lenovo.brand = "Lenovo";
		Lenovo.model = "ThinkPad X1 Carbon";
		Lenovo.year = 2022;
		Lenovo.quintity = 120;
		Lenovo.price = 1500;
		Lenovo.ram = "16 GB";
		Lenovo.rom = "512GB SSD";
		
		
		
		// Print the structures
		
		cout << "\t<==============>\n";
		cout << "\t  LAPTOPS SHOP \n";
		cout << "\t<=============>\n\n";
		
		
		cout << "\t PRODUCT 1 \n\n"; 
		cout << "Brand: "  << Dell.brand << endl;
		cout << "Model: " << Dell.model << endl;
		cout << "Year: " << Dell.year << endl;
		cout << "Quintity: " << Dell.quintity << endl;
		cout << "price $" << Dell.price  <<endl;
		cout << "RAM: " << Dell.ram << endl;
		cout << "ROM: " << Dell.rom << endl << endl;
		
		
		cout << "\t PRODUCT 2 \n\n"; 
		cout << "Brand: "  << Apple.brand << endl;
		cout << "Model: " << Apple.model << endl;
		cout << "Year: " << Apple.year << endl;
		cout << "Quintity: " << Apple.quintity << endl;
		cout << "price $" << Apple.price  <<endl;
		cout << "RAM: " << Apple.ram << endl;
		cout << "ROM: " << Apple.rom << endl << endl;
		
		
		
		cout << "\t PRODUCT 3 \n\n"; 
		cout << "Brand: "  << HP.brand << endl;
		cout << "Model: " << HP.model << endl;
		cout << "Year: " << HP.year << endl;
		cout << "Quintity: " << HP.quintity << endl;
		cout << "price $" << HP.price  <<endl;
		cout << "RAM: " << HP.ram << endl;
		cout << "ROM: " << HP.rom << endl << endl; 
		
		
		
		cout << "\t PRODUCT 4 \n\n"; 
		cout << "Brand: "  << Microsoft.brand << endl;
		cout << "Model: " << Microsoft.model << endl;
		cout << "Year: " << Microsoft.year << endl;
		cout << "Quintity: " << Microsoft.quintity << endl;
		cout << "price $" << Microsoft.price  <<endl;
		cout << "RAM: " << Microsoft.ram << endl;
		cout << "ROM: " << Microsoft.rom << endl << endl;
		
		
		cout << "\t PRODUCT 5 \n\n"; 
		cout << "Brand: "  << Lenovo.brand << endl;
		cout << "Model: " << Lenovo.model << endl;
		cout << "Year: " << Lenovo.year << endl;
		cout << "Quintity: " << Lenovo.quintity << endl;
		cout << "price $" << Lenovo.price  <<endl;
		cout << "RAM: " << Lenovo.ram << endl;
		cout << "ROM: " << Lenovo.rom << endl << endl;
		
		
		
		
		
		
		return 0;
	}
