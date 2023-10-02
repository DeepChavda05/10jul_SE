#include <iostream>
using namespace std;
class Get
{
public:
    int num1, num2;
    void get()
    {
        cout << "Enter two numbers:";
        cin >> num1 >> num2;
    };
};
class Sum : public Get
{
public:
    int sum() { return (num1 + num2); } // function to add the values of two variables
};
class Sub : public Get
{
public:
    int sub() { return (num1 - num2); } // function to sub the values of two variables
};
class Mul : public Get
{
public:
    int mul() { return (num1 * num2); } // function to mul the values of two variables
};
class Div : public Get
{
public:
    float div() { return ((float)num1 / (float)num2); } // function to mul the values of two variables
};
int main()
{
    char i;
    int choice;
            Sum summation;
            Sub subtraction;
            Mul multiplication;
            Div division;
    do
    {
        cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n"
             << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        summation.get();
            cout << "Sum is:" << summation.sum(); // this will not work because we have declared a function in base class and
            break;
        case 2:
        subtraction.get();
            cout << "Subtraction is:" << subtraction.sub(); // this will not work because we have declared a function in base class and
            break;
        case 3:
        multiplication.get();
            cout << "Multiplication is:" << multiplication.mul(); // this will not work because we have declared a function in base class and
            break;
        case 4:
        division.get();
            cout << "Division is:" << division.div(); // this will not work because we have declared a function in base class and
            break;
        default:
            cout << "Enter valid choice......." << endl;
            break;
        }
        cout<<endl<<"Do you want to continue.....\nFor yes press 'y' and For No press 'n'"<<endl;
        cin>>i;
    } while (i == 'y' || i == 'Y');

}