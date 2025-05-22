#ifndef CASHIER_H
#define CASHIER_H

#include "Employee.h"

class Cashier : public Employee
{
private:
    int counterNumber;

public:
    Cashier(int id, string name, double salary, int counternumber);
    void displayDetails() const override;
    ~Cashier();
};

#endif