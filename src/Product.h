// preprocessor directive that checks if a macro is not defined
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    double price;

public:
    Product(const std::string &name, double price);
    string getName() const;
    double getPrice() const;
    void display() const;
    ~Product();
};
#endif
