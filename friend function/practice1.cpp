#include <iostream>
using namespace std;
class Circle;
class Rectangle {
    int length, breadth;
public:
    void getData(int, int);
    void showData();
    friend void compareArea(Rectangle, Circle);
};
class Circle {
    int radius;
public:
    void getData(int);
    void showData();
    friend void compareArea(Rectangle, Circle);
};
void Rectangle::getData(int l, int b)
{
    length = l;
    breadth = b;
}
void Rectangle::showData()
{
    cout << "Rectangle area = " << length * breadth << endl;
}
void Circle::getData(int r)
{
    radius = r;
}
void Circle::showData()
{
    cout << "Circle area = " << 3.14 * radius * radius << endl;
}
void compareArea(Rectangle r, Circle c)
{
    float rectangleArea = r.length * r.breadth;
    float circleArea = 3.14 * c.radius * c.radius;

    if (rectangleArea > circleArea)
        cout << "Rectangle is larger" << endl;
    else if (circleArea > rectangleArea)
        cout << "Circle is larger" << endl;
    else
        cout << "Both areas are equal" << endl;
}

int main()
{
    Rectangle r;
    Circle c;
    r.getData(10, 5);
    c.getData(4);
    r.showData();
    c.showData();
    compareArea(r, c);
    return 0;
}