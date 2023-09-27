// Encapsulation is a warring up the data
#include<iostream>
using namespace std;
class Student{
    private:
    int roll_no, age;
    public:
    Student(){
        cout<<"Enter Roll No. : "; cin>>roll_no;
        cout<<"\n Enter Age     :";cin >>age ;
    }
    void show()
    {
        cout<<roll_no<<"'s age is: "<< age;
    }
};
int main() {
    Student st;
    st.show(); //call the show()
    return 0;
}