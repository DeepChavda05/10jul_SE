#include<iostream>
using namespace std;
class GrandParent{
public:
int nh;
    GrandParent(){
        cout<<"Enter the total no of house: ";
        cin>>nh;
    }
};
class Parent : public GrandParent{
public:
int bal;
    Parent(){
        cout<<"Enter the total bank balance: ";
        cin>>bal;
    }
};
class Child : public Parent{
public: 
int car;
    Child() {cout << "Enter the number of cars owned by you:";cin >>car;}
    void display(){
        cout<<"Total no of house is: "<< nh <<endl;
        cout<<"Total bank balance is: "<< bal <<endl;
        cout<<"Total no of car is: "<< car <<endl;
    };
};
int main(){
    Child c1;
    c1.display();
    return 0;
}
