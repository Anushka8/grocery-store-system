#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager(int id, string name, double salary, int teamSize)
    : Employee(id, name, salary), teamSize(teamSize) {}

void Manager::displayDetails() const
{
    cout << "Manager -> ";
    Employee::displayDetails();
    cout << ", Team Size: " << teamSize << endl;
}

Manager::~Manager() {
    // cout << "Manager destroyed: " << Employee::getName() << endl;
}