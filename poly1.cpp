#include <iostream>
using namespace std;
class Figure
{
protected:
    float dim1, dim2;

public:
    Figure(float a, float b)
    {
        dim1 = a;
        dim2 = b;
    }
    Figure()
    {
        dim1 = 0;
        dim2 = 0;
    }
    virtual float area() {}
};
class Rectangle : public Figure
{
public:
    Rectangle(float length, float breadth) : Figure(float lenght, float breadth) {}
    float area()
    {
        return (dim1 * dim2);
    }
};
class Triangle : public Figure
{
public:
    Triangle(float height, float base) : Figure(float height, base) {}
    float area()
    {
        return (height * base / 2);
    }
};
int main()
{
    Figure f;
    Rectangle rect(100.5, 7);
    Triangle tri(10.5, 5.6);
    float areaOfRectangle;
    float areaOfTriangle;
    f = &rect;
    areaOfRectangle = f->area(); // calls area() of class Rectangle
    f = &tri;
    areaOfTriangle = f->area(); // calls area() of Triangle
    cout << "The area of Rectangle is : " << areaOfRectangle << endl;

    cout << "The area of the Tirangle is : " << areaOfTriangle << endl;
    return 0;
}