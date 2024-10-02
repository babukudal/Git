#include<iostream>
using namespace std;
template<typename T>
class A
{

    T a1, a2;
public:
    A() { cout << "Default Constructor" << endl;}
    ~A(){cout<<"Destructor of class A"<<endl;}
    void setData()
    {
        a1=100;
        a2 = 2000;
    }
    T getsum()
    {
        return (a1+a2);
    }
    
};
int main()
{
  A<int> b;
  b.setData();
  cout<<b.getsum()<<endl;
}
