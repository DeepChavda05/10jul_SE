// WAP to get user detail using single level inheritance
#include<iostream>
using namespace std;
class Base{
public:
int id, age;
string nm;
    Base(){
        cout<<"Enter your id: ";    cin>>id;
        cout<<"Enter your name: ";    cin>>nm;
        cout<<"Enter your age: ";    cin>>age;
    }
};
class Derived : public Base { // derived class inherits from base class.
public:
    Derived(){
        cout<<"\nYour ID is "<<id<<endl;
        cout<<"Your Name is "<<nm<<endl;
        cout<<"Your age is: "<<age;
    }
};
int main()
{
    Derived d1;
    return 0;
}