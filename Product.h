#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
	int productId;
	string productType;
	string productName;
	float price = 0;
	int quantity = 0;

public:
	bool operator == (const Product& p) const { return productId == p.productId; }
	bool operator != (const Product& p) const { return !operator==(p); }

	virtual float calculatePriceWithTax(float price)
	{
		 return price;
	};
};

