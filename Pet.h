#pragma once
#include "Product.h"
#include <string>

using namespace std;

class Pet :
    public Product
{
public :
    static const int taxPercentage = 6;
public : 
    string petType;
    char gender;
    int age;

   float calculatePriceWithTax(float price) override
    {
        return price * Pet::taxPercentage;
    }
    

};

