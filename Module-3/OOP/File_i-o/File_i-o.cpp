#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out;
    out.open("hello.txt");
    out<<"Hello";
    out.close();
    ifstream in("hello.txt");
    in>>str;
    cout << str;
    in.close();
    return 0;
}