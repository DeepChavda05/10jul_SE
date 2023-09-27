// This operator
#include<iostream>
using namespace std;
int imaginary = 0; // global variable
int no = 10; //global variable
class Complex{
public:
    int imaginary = 100;//real and imaginary part of complex number.
    int data(){
        int imaginary = 50;
        if(imaginary < this->imaginary){
        return this->imaginary;}
        else if(imaginary == ::imaginary){
            return (::imaginary);
        }
        else{
        return (imaginary);}
    } 

    /* int no = 1; //data member
    int scope()
    {
        int no = 100; //local variable
        cout<< endl << "Value of the local variable no is: " << no;
        cout<< endl << "Value of the globl variable no is: " << :: no;
        cout<< endl << "Value of the data member no is: " << this->no;
        return 0;
    }*/
};
int main()
{
    Complex cobj;
    cout<<"The value of imaginary in class "<<cobj.data();
    // cobj.scope();

    return 0;
}