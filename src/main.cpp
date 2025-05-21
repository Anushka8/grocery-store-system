#include <iostream>
#include "Product.h"
#include "Order.h"
#include "Employee.h"
#include "Manager.h"
#include "Cashier.h"

int main()
{
    Product p1("Apples", 1.99);
    Product p2("Bread", 2.49);
    Product p3("Milk", 3.10);

    Order order1(1001);
    order1.addProduct(p1);
    order1.addProduct(p2);
    order1.addProduct(p3);

    cout << "\n--- Order Details ---" << endl;
    order1.displayOrder();

    Employee e1(1, "John", 101);
    Manager m1(1, "Alice", 201, 2);
    Cashier c1(1, "Bob", 301, 5);

    cout << "\n--- Employees ---" << endl;
    e1.displayDetails();
    m1.displayDetails();
    c1.displayDetails();

    return 0;
}