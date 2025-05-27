#include <iostream>
#include <memory>

#include "Product.h"
#include "Order.h"
#include "Employee.h"
#include "Manager.h"
#include "Cashier.h"

using namespace std;

int main()
{
    shared_ptr<Product> p1 = make_shared<Product>("Apples", 1.99);
    shared_ptr<Product> p2 = make_shared<Product>("Bread", 2.49);
    shared_ptr<Product> p3 = make_shared<Product>("Milk", 3.10);

    Employee e1(1, "John", 101);
    Manager m1(1, "Alice", 201, 2);
    Cashier c1(1, "Bob", 301);

    cout << "\n--- Employees ---" << endl;
    e1.displayDetails();
    m1.displayDetails();
    c1.displayDetails();

    cout << "" << endl;
    c1.startShift();
    cout << "" << endl;

    Cashier c2(2, "Cyrus", 301);
    // transfer terminal from Bob to Cyrus
    unique_ptr<CashierTerminal> temp = move(c1.releaseTerminal());
    c2.setTerminal(move(temp));
    c2.startShift();

    // Order order1(1001);
    // order1.addProduct(p1);
    // order1.addProduct(p2);
    // order1.addProduct(p3);

    // cout << "\n--- Order Details ---" << endl;
    // order1.displayOrder();
    // cout << "" << endl;

    return 0;
}