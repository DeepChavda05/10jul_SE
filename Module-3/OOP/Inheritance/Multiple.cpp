#include<iostream>
using namespace std;
class A{
public:
    int aid;
    string anm;
    int a()
    {
        cout<<endl<<"-----------------------A--------------------"<<endl;
        cout<<"Enter your id: "; cin >>aid;
        cout<<"Enter your name: "; cin >>anm;
        return 0;
    }
};
class B{
public:
    int bid;
    string bnm;
    int b()
    {
        cout<<endl<<"-----------------------B--------------------"<<endl;
        cout<<"Enter your id: "; cin >>bid;
        cout<<"Enter your name: "; cin >>bnm;
        return 0;
    }
};
class Tops : public A, public B
{
public: 
    void showdata()
    {
        cout<<endl<<"--------------------------"<<anm<<"------------------------"<<endl;
        cout<<"Your id is: "<<aid;
        cout<<endl<<"--------------------------"<<bnm<<"------------------------"<<endl;
        cout<<"Your id is: "<<bid;
    }
};
int main()
{
    Tops t1; //object of class tops
    t1.a();   //calling function from base class
    t1.b();//calling function from derived class  
    t1.showdata();    //function defined in derived class
    return 0;
}