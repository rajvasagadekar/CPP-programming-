#include <iostream>
using namespace std;

class Calculator
{
public:
   
 int add(int a, int b)
 {
     return a + b;
 }

 int add(int a, int b, int c)
 {
    return a + b + c;
 }

 int add(float a, float b)
 {
    return a + b;
 }
};

int main()
{
    Calculator c;

    cout << "Addition of two numbers: " << c.add(5, 4) << endl;

    cout << "Addition of three numbers: " << c.add(1, 2, 3) << endl;

    cout << "Addition of two floating values: " << c.add(2.5f, 4.5f) << endl;

    return 0;
} 