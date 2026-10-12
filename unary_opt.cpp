#include <iostream>
using namespace std;

class Number
{
    int r;

public:
    Number(int n)
    {
        r = n;
    }

    Number increment()
    {
        return Number(r + 1);
    }

    void display()
    {
        cout << "Number = " << r << endl;
    }
};

int main()
{
    Number n1(10);

    cout << "Before increment:" << endl;
    n1.display();

    Number n2 = n1.increment();

    cout << "After increment:" << endl;
    n2.display();

    return 0;
}