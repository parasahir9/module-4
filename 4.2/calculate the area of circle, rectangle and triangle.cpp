#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
};
   class Rectangle : public Shape
{
    
    float length;
    float breadth;
    public:
    Rectangle(float l, float b)
    {
       length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
};
    class Triangle : public Shape
{
    
    float base;
    float height;
    public:
    Triangle(float b, float h)
     {
        base = b;
        height = h;
     }
    float area()
    {
        return 0.5 * base * height;
    }
};
class Circle : public Shape
{
private:
    float radius;
public:
    Circle(float r)
    {
        radius = r;
    }
    float area()
    {
        return M_PI * radius * radius;
    }
};
int main()
{
    Rectangle r(15, 7);
    Triangle t(45, 8);
    Circle c(8);
    cout << "Area of rectangle: " << r.area() << endl;
    cout << "Area of triangle: " << t.area() << endl;
    cout << "Area of circle: " << c.area() << endl;
    return 0;
}
