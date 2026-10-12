#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

class Square : public Shape
{
    float side;

public:
    Square(float s)
    {
        side = s;
    }

    void area() override
    {
        cout << "Area of Square = " << side * side << endl;
    }
};

int main()
{
    Circle c(22);
    Rectangle r(12, 3);
    Square s(5);

    Shape *ptr;

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    ptr = &s;
    ptr->area();

    return 0;
}