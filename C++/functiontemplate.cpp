#include <iostream>
using namespace std;
template <typename T>
T sum(T a1,T a2)
{
    T rs;
    rs=a1+a2;
    return rs;
}
int main()
{
    int a=10,b=20;
    float c=5.5,d=6.5;
    cout<<"Sum of int :"<<sum(a,b)<<endl;
    cout<<"Sum of float :"<<sum(c,d)<<endl;
}