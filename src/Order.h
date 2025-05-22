// include guard which prevents the file being included multiple times
// during compilation, which would otherwise cause errors due to redefinition
#ifndef ORDER_H
#define ORDER_H

// vector is a dynamic array from STL (Standard Template Library)
#include <vector>
#include <memory>
#include "Product.h"
using namespace std;

class Order
{
private:
    int orderId;
    vector<shared_ptr<Product>> products;

public:
    Order(int orderId);
    // const Product &product means pass by reference and cannot be modified (read only)
    void addProduct(shared_ptr<Product> &product);
    double calculateTotal() const;
    void displayOrder() const;
    ~Order();
};

#endif