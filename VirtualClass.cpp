#include<iostream>
using namespace std;
 class A
{
    public:
   int a;
   public:
   A()
   {
      a=1;
   }

};
 class B: virtual public A
{
    protected:
   int b;

    public:
    B()
    {
        b=2;
    }
   

};
class C:virtual public A
{
    protected:
    int c;
    public:
    C()
    {
        c=3;
    }

};
class D:public B,public  C
{
    protected:
    int d;
    public:
    D()
    {
        d=4;
    }
    void print()
    {
        cout<<A::a<<endl;
        cout<<B::b<<endl;
        cout<<C::c<<endl;       
        cout<<d<<endl;
    }
};
int main( )
{
D *d = new D();
d->print();
return 0;
}


//here without virtual class inheritance is not possible create object of class D
//Virtual inheritance is a powerful feature in C++ that helps manage complex inheritance scenarios and prevents the diamond problem. 
