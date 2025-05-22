#include "Order.h"
#include <iostream>
using namespace std;

Order::Order(int orderId) : orderId(orderId) {}

void Order::addProduct(shared_ptr<Product> &product)
{
    products.push_back(product);
}

double Order::calculateTotal() const
{
    double total = 0;
    for (const auto &product : products)
    {
        total += product->getPrice();
    }
    return total;
}

void Order::displayOrder() const
{
    cout << "Order ID: " << orderId;
    for (const auto &product : products)
    {
        product->display();
    }
    cout << "Total Amount: $" << calculateTotal() << endl;
}

Order::~Order() {
    cout << "Order destroyed: " << orderId << endl;
}