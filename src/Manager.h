#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
private:
    int teamSize;

public:
    Manager(int id, string name, double salary, int teamSize);
    void displayDetails() const override;
};

#endif