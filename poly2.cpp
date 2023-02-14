// to illustrate pure virtual function
#include <iostream>
using namespace std;
class Polygon
{
public:
    virtual void Draw() = 0;
};
class Rectangle : public Polygon
{
public:
    void Draw()
    {
        cout << "Drawing Rectangle " << endl;
    }
};
class Triangle : public Polygon
{
public:
    void Draw()
    {
        cout << "Drawing Trinagle " << endl;
    }
};
class Pentagon : public Polygon
{
public:
    void Draw()
    {
        cout << "Drawing Pentagon " << endl;
    }
};
int main()
{

    Polygon *p[3];
    Rectangle r;
    Triangle t;
    Pentagon pent;
    p[0] = &r;
    p[1] = &t;
    p[2] = &pent;
    for (int i = 0; i < 3; i++)
        p[i]->Draw();
    return 0;
}