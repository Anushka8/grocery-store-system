#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;

public:
    Employee(int id, string name, double salary);
    virtual void displayDetails() const;
    virtual ~Employee();
};

#endif