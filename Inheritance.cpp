#include<iostream>
using namespace std;
class  Person{
public:
    string name;
    
    Person(string n){name=n;}
    Person(){}

    void print(){ cout << "Name is : " << name << endl ; }
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

    Student b("AKU", "C++");
    b.print();

}


