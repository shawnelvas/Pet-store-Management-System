#include <typeinfo>
#include "Inventory.h"
#include "Pet.h"
#include "PetSupplies.h"


void Inventory::showProducts()
{   
    if (productList.empty())
    {
        cout << "\n\n--- Pet Inventory Store is empty ---\n";
        return;
    }
    cout << "\n\n---Pet Inventory Store ---\n";
    cout << "\n" << setw(10) << "Product Id"
        << setw(16) << "Product Name"
        << setw(10) << "Price"
        << setw(19) << "Quantity" << endl;
    cout << "---------------------------------------------------------------";
    
    string productType = "";
    //for (list<Product>::iterator it = productList.begin(); it != productList.end(); ++it) {
    for (Product& it : productList)
    {
        cout << endl;
        cout.width(15);
        cout.setf(ios::left, ios::adjustfield);
        std::cout << it.productId;

        cout.width(18);        
        std::cout << it.productName;

        cout.width(8);
        productType = it.productType;
        Product* p = getActualType(productType);
        std::cout << p->calculatePriceWithTax(it.price);

        //std::cout << it.calculatePriceWithTax(it.price);

        cout.width(15);
        cout.setf(ios::right, ios::adjustfield);
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        std::cout << it.quantity;
    }
    
}

void Inventory::deleteProduct(int productId)
{
    Product p = Product();
    for (Product& it : productList)
    {
        if (it.productId == productId) {
            p = it;
            break;
        }
    }
    
    productList.remove(p);
}

Product* Inventory::getActualType(string productType)
{
    if (productType == "Pet")
        return new Pet();
    else   if (productType == "Pet Supplies")
        return new PetSupplies();
    else return new Product();
}
