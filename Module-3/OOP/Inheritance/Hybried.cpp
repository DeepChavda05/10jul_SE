#include<iostream>
using namespace std;
class A{
public:
    A(){cout<<"This is default constructor of A"<<endl;}
};
class B : virtual public A{
public: 
    B(){cout<<"This b constructor."<<endl;}
};
class C : virtual public A {
public:
    C(){cout<<"This is default constructor of c class."<<endl;};
};
class D: public B , public C{
public: 
    D(){cout<<"This is class D.";};
};
int main()
{
    D d1;
    return 0;
}