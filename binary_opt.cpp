#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number(int n)
    {
        num = n;
    }

    Number add(Number n)
    {
        return Number(num + n.num);
    }

    void display()
    {
        cout << "Result = " << num << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Number n1(a);
    Number n2(b);

    Number n3 = n1.add(n2);

    n3.display();

    return 0;
}