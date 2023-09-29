// WAP to print value using copy constructor
#include<iostream>
using namespace std;
class Construct{
public:
int no;
    Construct(){
        cout<<"Constructor called"<<endl;
    }
    Construct(Construct &obj1)
    {
        no = obj1.no;
        cout<<"This is copy constructor.";
        cout<<"Value of no is: "<< no;
    }
};
int main(){
    Construct con1;
    con1.no = 50;
    Construct con2 = con1;
    return 0;
}