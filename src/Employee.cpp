#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int id, string name, double salary) : id(id), name(name), salary(salary) {}

void Employee::displayDetails() const
{
    cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
}

Employee::~Employee()
{
}
