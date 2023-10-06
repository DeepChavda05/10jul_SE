// WAP to make addition using Function overloading
#include<iostream>
using namespace std;
class Overloading{
public:
    inline int add(int a, int b){  return a+b;}
    inline int add(int a, int b, int c){  return a+b+c;}
};
int main()
{
    Overloading over;
    cout<< endl<< "Addition is: "<< over.add(5,3);
    cout<< endl<< "Addition is: "<< over.add(5,3, 7);
    return 0;
}