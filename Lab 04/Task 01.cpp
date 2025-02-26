//1.	Write a C++ program to create a class Circle with a constant function to calculate the area and a non-constant function to modify the radius. Demonstrate calling both functions.
include<iostream>
using namespace std;
class Circle
{
private:
    double radius;
public:
    Circle(double r)
    {
        radius=r;
    }
    double area() const
    {
        return 3.14*radius*radius;
    }
    void change(double r)
    {
        radius=r;
    }
};
int main()
{
    Circle c(5);
    cout<<"Area of circle is: "<<c.area()<<endl;
    c.change(10);
    cout<<"Area of circle after change radus is: "<<c.area()<<endl;
    return 0;
}