// Abstraction is use to hide the background detail which was unnecessary for the user
#include<iostream>
using namespace std;
class Abstract{
private:
    int no;
public:
    Abstract(){//default constructor
        no = 10;
        cout<<"Value of the no is: "<< no;
    }
};
int main()
{
    Abstract obj;//creating object from class abstract
    return 0;
}