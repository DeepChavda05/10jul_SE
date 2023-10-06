// WAP to make division using function overriding
#include<iostream>
using namespace std;
class Division{
public:
    inline float div(float a, float b){ return a/b;}
};
class Div
{
public:
    inline float div(float a, float b){return a/b;};    
};
int main()
{
    Division d1;
    Div d2;
    cout<< endl<< "Division is: "<< d1.div(5.2, 8);
    cout<< endl<< "Division is: "<< d2.div(5.8, 2);
    return 0;
}