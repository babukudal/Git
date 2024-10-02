#include<iostream>
using namespace std;
class  Person{
public:
    string name;
    
    Person(string n){name=n;}
    Person(){}

    virtual void print(){ cout << "Name is : " << name << endl ; }
~Person() { }
};
class  Student :public  Person {
    public:
    string subject;
    Student(){}
    Student(string n, string s):Person(n)
    {
        subject=s;
    }        
    void print() { cout << "Name is : " << name <<" " <<subject <<endl; }
    ~Student() { }          

};
int main()
{

    //Student b("AKU", "C++");
    Person * b;
    b = new Student("AKU", "C++");
    b->print();

}
//in this code result is correct but it has a problem with memory management.
//because we have craeted a base class pointer which is pointing to derived class object 
//in that case whenever you will call print function it will print the name of base class not derived class.
//this is not expected behaviour in real world scenario.
//so this is called slicing problem.
//so use virtual function which resolve the issues related to slicing proble/function binding issue.
