#include <iostream>
using namespace std;

class rectangle;   // Forward declaration

class circle
{
    int radius;

public:

    void getradius(int x)
    {
        radius = x;
    }

    void showradius()
    {
        cout << "Radius of circle is: " << radius << endl;
    }

    // Rectangle class can access private members of circle
    friend class rectangle;

    void displayrectangle(rectangle r);
    
    // Getter for main()
    int getradius()
    {
        return radius;
    }
};

class rectangle
{
    int length;
    int breadth;

public:

    void getlength(int x)
    {
        length = x;
    }

    void getbreadth(int x)
    {
        breadth = x;
    }

    void showlength()
    {
        cout << "Length of rectangle is: " << length << endl;
    }

    void showbreadth()
    {
        cout << "Breadth of rectangle is: " << breadth << endl;
    }

    // Circle class can access private members of rectangle
    friend class circle;

    void displaycircle(circle c);

    // Getters for main()
    int getlength()
    {
        return length;
    }

    int getbreadth()
    {
        return breadth;
    }
};


// Circle class accessing rectangle's private data
void circle::displayrectangle(rectangle r)
{
    cout << "Area of rectangle is: "
         << r.length * r.breadth << endl;
}


// Rectangle class accessing circle's private data
void rectangle::displaycircle(circle c)
{
    cout << "Area of circle is: "
         << 3.14 * c.radius * c.radius << endl;
}


int main()
{
    circle obj1;
    rectangle obj2;

    // Circle
    obj1.getradius(10);
    obj1.showradius();

    // Rectangle
    obj2.getlength(20);
    obj2.getbreadth(30);

    obj2.showlength();
    obj2.showbreadth();

    // Friend class functions
    obj1.displayrectangle(obj2);
    obj2.displaycircle(obj1);

    // Compare areas of circle and rectangle
    if (3.14 * obj1.getradius() * obj1.getradius() >
        obj2.getlength() * obj2.getbreadth())
    {
        cout << "Circle is bigger than rectangle" << endl;
    }
    else
    {
        cout << "Rectangle is bigger than circle" << endl;
    }

    return 0;
}