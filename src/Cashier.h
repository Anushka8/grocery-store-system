#ifndef CASHIER_H
#define CASHIER_H

#include "Employee.h"
#include "CashierTerminal.h"

#include <memory>
using namespace std;

class Cashier : public Employee
{
private:
    int counterNumber;
    unique_ptr<CashierTerminal> terminal;


public:
    Cashier(int id, string name, double salary);
    void startShift();
    void setTerminal(unique_ptr<CashierTerminal> newTerminal);
    unique_ptr<CashierTerminal> releaseTerminal();
    void displayDetails() const override;
    ~Cashier();
};

#endif