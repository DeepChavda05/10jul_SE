// WAP to use of operator overloading
#include <iostream>
using namespace std;
class complex
{
public:
    int no;
    void get()
    {
        cout << "Enter the value of the no: ";
        cin >> no;
    }
    complex operator++()
    {
        no++;
    }
    complex operator+(complex &obj2)
    {
        complex obj3;
        obj3.no = no + obj2.no;
        return obj3;
    }
    void display()
    {
        cout << endl
             << "Value of the no is: " << no;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.get();
    c2.get();
    // ++c1;
    c3 = c1 + c2;
    c3.display();
    return 0;
}