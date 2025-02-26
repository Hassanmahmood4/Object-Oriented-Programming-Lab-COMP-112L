//3.	Create a Student class where the ID is constant, marks can be updated, and data is encapsulated with appropriate access control
#include <iostream>
using namespace std;
class Student {
    private:
        const int ID;
        double marks;
    public:
        Student(int i, double m) : ID(i)
        {
            marks=m;
        }
        double getMarks() const
        {
            return marks;
        }
        void setMarks(double m)
        {
            marks=m;
        }
};
int main()
{
    Student s(1, 75);
    cout<<"Marks of student is: "<<s.getMarks()<<endl;
    s.setMarks(85);
    cout<<"Marks of student after change marks is: "<<s.getMarks()<<endl;
    return 0;
}