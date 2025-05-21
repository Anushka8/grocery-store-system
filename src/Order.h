// include guard which prevents the file being included multiple times
// during compilation, which would otherwise cause errors due to redefinition
#ifndef ORDER_H
#define ORDER_H

// vector is a dynamic array from STL (Standard Template Library)
#include <vector>
#include "Product.h"
using namespace std;

class Order
{
private:
    int orderId;
    vector<Product> products;

public:
    Order(int orderId);
    // const Product &product means pass by reference and cannot be modified (read only)
    void addProduct(const Product &product);
    double calculateTotal() const;
    void displayOrder() const;
};

#endif