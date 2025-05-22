#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(const string &name, double price) : name(name), price(price) {}

string Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}

// a function that just reads/displays/calculates data without modifying any member variables
// should be defined as const. This guarantees that it will not modify any member variables
void Product::display() const
{
    cout << "Product: " << name << ", Price: $" << price << endl;
}

Product::~Product(){
    cout << "Product destroyed: " << name << endl;
}
