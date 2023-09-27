// WAP to addition of the 2variable using parametrize constructor
#include<iostream>
using namespace std;
class Addition{
public:
    Addition(int a, int b)
    {
        cout<< endl << "Addition is: " << a + b;
    }
};
int main()
{
    Addition add(23, 7);
    return 0;
}