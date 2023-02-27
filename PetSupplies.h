#pragma once
#include "Product.h"
#include <string>

using namespace std;

class PetSupplies :
    public Product
{
public:
    static const int taxPercentage = 8;
public : 
    string brand;
    int quantity;
    float calculatePriceWithTax(float price) override
    {
        return price * PetSupplies::taxPercentage;
    }
};

