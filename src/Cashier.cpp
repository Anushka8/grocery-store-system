#include "Cashier.h"

#include <iostream>
using namespace std;

Cashier::Cashier(int id, string name, double salary, int counterNumber)
    : Employee(id, name, salary), counterNumber(counterNumber) {}

void Cashier::displayDetails() const
{
    cout << "Cashier -> ";
    Employee::displayDetails();
    cout << ", Counter Number: " << counterNumber << endl;
}

Cashier::~Cashier() {
    cout << "Cashier destroyed: " << Employee::getName() << endl; 
}