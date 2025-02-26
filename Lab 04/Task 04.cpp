//4.	Write c++ code to create a class Counter with a private data member count. Provide methods to increment and decrement the count while ensuring it doesn't go below zero.
#include <iostream>
using namespace std;
class Counter {
    private:
        int count;
    public:
        Counter(int c)
        {
            count=c;
        }
        void increment()
        {
            count++;
        }
        void decrement()
        {
            if(count>0)
            {
                count--;
            }
            else
            {
                cout<<"Count is already zero"<<endl;
            }
        }
        int getCount() const
        {
            return count;
        }
};
int main()
{
    Counter c(5);
    cout<<"Count is: "<<c.getCount()<<endl;
    c.increment();
    cout<<"Count after increment is: "<<c.getCount()<<endl;
    c.decrement();
    cout<<"Count after decrement is: "<<c.getCount()<<endl;
    c.decrement();
    cout<<"Count after decrement is: "<<c.getCount()<<endl;
    return 0;
}