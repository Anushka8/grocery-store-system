#include "Cashier.h"

#include <iostream>
using namespace std;

Cashier::Cashier(int id, string name, double salary)
    : Employee(id, name, salary), terminal(make_unique<CashierTerminal>()) {}


void Cashier::startShift() {
    if (terminal) {
        terminal->operate();
    }
}

void Cashier::setTerminal(unique_ptr<CashierTerminal> newTerminal) {
    terminal = move(newTerminal);
}

unique_ptr<CashierTerminal> Cashier::releaseTerminal() {
    return move(terminal);
}

void Cashier::displayDetails() const
{
    cout << "Cashier -> ";
    Employee::displayDetails();
}

Cashier::~Cashier() {
    cout << "New cashier will arrive soon" << endl; 
}