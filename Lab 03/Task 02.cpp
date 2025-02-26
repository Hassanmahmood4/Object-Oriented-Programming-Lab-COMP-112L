#include<iostream>
using namespace std;

inline int  cube(int s){
    return s*s*s;
  }
int main(){
  int n;
  cout<<"Enter the number of which you want to find cube";
  cin>>n;
  cube();
  cout<<"The cube of "<<n<<" is :"<<cube(n)<<endl;
  }