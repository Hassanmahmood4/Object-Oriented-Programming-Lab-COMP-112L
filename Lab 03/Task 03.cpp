//3.	Define a Person class where name is allocated dynamically in the constructor. Implement a copy constructor for deep copying and ensure proper memory deallocation in the destructor.
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char *name;

public:
    Person(const char *n)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    Person(const Person &p)
    {
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
    }
    ~Person()
    {
        delete[] name;
    }
    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Person p1("Hassan Ali");
    p1.display();
    Person p2 = p1;
    p2.display();
    return 0;
}