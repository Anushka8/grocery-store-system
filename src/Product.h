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
    int quantity;

public:
    Product(const std::string &name, double price, int quantity);
    void display() const;
    void updateQuantity(int qty);
};
#endif
