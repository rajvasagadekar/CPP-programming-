#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void salary()
    {
        cout << "Salary of Employee" << endl;
    }
};

class Manager : public Employee
{
    float Salary;

public:
    Manager(float s)
    {
        Salary = s;
    }

    void salary() override
    {
        cout << "Salary of Manager = " << Salary  << endl;
    }
};

class Developer : public Employee
{
    float Salary;

public:
    Developer(float s)
    {
        Salary = s;
    }

    void salary() override
    {
        cout << "Salary of Developer = " << Salary << endl;
    }
};

int main()
{
    Employee e;
    Manager m(50000);
    Developer d(40000);

    e.salary();
    m.salary();
    d.salary();

    return 0;
}