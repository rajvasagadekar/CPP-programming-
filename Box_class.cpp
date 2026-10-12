#include <iostream>
using namespace std;

class Box
{
    float length, width, height;

public:

    Box()
    {
        length = 1;
        width = 1;
        height = 1;

        cout << "Default constructor called." << endl;
    }


    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;

        cout << "Parameterized constructor called." << endl;
    }

    Box(Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;

        cout << "Copy constructor called." << endl;
    }

    float volume()
    {
        return length * width * height;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << volume() << endl;
    }

    ~Box()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    
    Box b1;

    cout << "\nBox 1:" << endl;
    b1.display();

    Box b2(10, 5, 4);

    cout << "\nBox 2:" << endl;
    b2.display();

   
    Box b3(b2);

    cout << "\nBox 3 (Copied from Box 2):" << endl;
    b3.display();

    return 0;
}