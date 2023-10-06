#include<iostream>
using namespace std;
template <class t>
t swap(t a,t b) {

    return a=b+b-a;
}
int main()
{
    cout<<swap<char>('A','B') << endl;
    cout << swap<int>(5, 6);
    return 0;
}