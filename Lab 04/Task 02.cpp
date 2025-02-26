//2.	Write a C++ program to create a class Rectangle with a constant data member for the width and a non-constant data member for the height. Use an initialization list to set the width.
#include <iostream>
using namespace std;
class Rectangle {
    private:
        const double width;
        double height;
    public:
        Rectangle(double w, double h) : width(w)
        {
            height=h;
        }
        double area() const
        {
            return width*height;
        }
        void change(double w, double h)
        {
            height=h;
        }
};
int main()
{
    Rectangle r(10, 5);
    cout<<"Area of rectangle is: "<<r.area()<<endl;
    r.change(20, 10);
    cout<<"Area of rectangle after change width and height is: "<<r.area()<<endl;
    return 0;
}
