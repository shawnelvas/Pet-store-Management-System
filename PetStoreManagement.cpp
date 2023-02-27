// PetStoreManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pet.h"
#include "PetSupplies.h"
#include "Inventory.h"

int option;
int c = 0;
int category;
int productid;


int operation()
{
	std::cout << "\nChoose your option:\n\n";
	std::cout << " 1 : Show Products \n 2 : Add New Product \n 3 : Delete Product \n 4 : Exit \n\n";
	std::cin >> option;
	return option;

}

int main()
{
	Pet pet;
	PetSupplies petsupplies;
	string input;
	Inventory petStoreInvetory;
	list<Product> data;

	std::cout << "Pet Store Management!\n";

begin:
	operation();


	switch (option) {
	case 1:
		
		petStoreInvetory.showProducts();
		//data = petStoreInvetory.productList;
		/*for (list<Product>::iterator it = data.begin(); it != data.end(); ++it) {
			cout << it->name + "\n";
		}*/
		goto begin;
		break;


	case 2:

		cout << "You choose to add a product. \nChoose Product Category: " << endl << endl;
		cout << " 1 : Pet \n 2 : Pet Supplies " << endl << endl;
		cin >> category;

		switch (category) {
		case 1:
			cout << "Enter Product Id." << endl;
			cin >> pet.productId;
			cout << "Enter Product Name." << endl;
			cin >> pet.productName;
			cout << "Enter Pet Type." << endl;
			cin >> pet.petType;
			cout << "Enter Pet Age for " << pet.petType << endl;
			cin >> pet.age;
			cout << "Enter the gender for " << pet.petType << endl;
			cin >> pet.gender;
			cout << "Enter the price for " << pet.petType << endl;
			cin >> pet.price;
			cout << "Enter the quantity for " << pet.petType << endl;
			cin >> pet.quantity;
			pet.productType = "Pet";
			petStoreInvetory.productList.push_back(pet);
			cout << "Product is successfully added" << endl << endl;
			goto begin;
			break;
		case 2:
			cout << "Enter Product Id." << endl;
			cin >> petsupplies.productId;
			cout << "Enter Product Name." << endl;
			cin >> petsupplies.productName;
			cout << "Enter Pet Supplies Brand" << endl;
			cin >> petsupplies.brand;
			cout << "Enter the price"  << endl;
			cin >> petsupplies.price;
			cout << "Enter Quantity " << endl;
			cin >> petsupplies.quantity;	
			petsupplies.productType = "Pet Supplies";
			petStoreInvetory.productList.push_back(petsupplies);
			cout << "Product is successfully added" << endl << endl;
			goto begin;
			break;
		}	
		break;
	case 3:
		std::cout << "Enter Product Id\n";
		cin >> productid;
		petStoreInvetory.deleteProduct(productid);
		cout << "Product is deleted successfully" << endl << endl;
		goto begin;
		break;	
	case 4:		
		exit(4);
		break;
	}
}

