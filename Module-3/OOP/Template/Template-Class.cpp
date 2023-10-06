#include<iostream>
using namespace std;
template <typename T>
class Template
{
public:
    T div(T a, T b)
    {
        return a/b;
    }
};
int main()
{
    Template<float> t1; // float type template class object created.
    cout << endl << t1.div(5, 2);
    Template<int> t2; // float type template class object created.
    cout << endl << t2.div(5, 2);
    return 0;
}