#include "Product.h"

using namespace std;

Product::Product(const string &name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

void Product::display() const
{
    cout << "Product: " << name << ", Price: $" << price << ", Quantity: " << quantity << endl;
}

void Product::updateQuantity(int qty)
{
    quantity += qty;
}
