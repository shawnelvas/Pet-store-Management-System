#pragma once
#include <iostream> 
#include <fstream>
#include <iomanip>
#include <list> 
#include <iterator> 
#include "Product.h"
using namespace std;

class Inventory
{
public :
	list<Product> productList;

public:
	void showProducts();
	void deleteProduct(int productId);
	
	Product* getActualType(string productType);

};

