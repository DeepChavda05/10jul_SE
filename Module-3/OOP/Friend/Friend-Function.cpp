// WAP to get the data using friend function
#include<iostream>
using namespace std;
class Friend
{
private:
    int n;
public:
    friend int Data(Friend &obj);
};
int Data(Friend &obj){
    cout<<"Enter a number : ";
    cin>>obj.n;
    return obj.n;
}
int main()
{
    Friend f1;
    cout<< endl << Data(f1);
    return 0;
}