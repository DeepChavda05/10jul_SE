// WAP to get the employee id and post.
#include<iostream> // to use cout 
using namespace std; // namespace is a library file
class Employee //employee is a class
{
public:
    int id; //data member
    string post;
    int getdata()
    {
        cout<<"Enter your id: "; //to get the data
        cin>>id; // to store the data
        cout<<"Enter your post: ";
        cin>>post;
        return 0;
    }
    void print()
    {
        cout<<"Mr. / Miss " <<post << " your id is: "<< id;
    };
};
int main()
{
    Employee emp;
    emp.getdata();
    emp.print();
    return 0;
}