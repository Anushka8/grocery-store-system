#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int id, string name, double salary) : id(id), name(name), salary(salary) {}

string Employee::getName() const
{
    return name;
}

double Employee::getSalary() const 
{
    return salary;
}

void Employee::displayDetails() const
{
    cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
}

Employee::~Employee()
{
    // cout << "Employee destroyed: " << name << endl;
}
