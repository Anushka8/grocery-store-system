// preprocessor directive that checks if a macro is not defined
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product
{
private:
    std::string name;
    double price;

public:
    Product(const std::string &name, double price);
    string getName() const;
    double getPrice() const;
    void display() const;
};
#endif
