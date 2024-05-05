#include <iostream>
using namespace std;
template <typename T,typename U>
void mul(T a,U b)
{
    cout<<"Multiplication is :"<<a*b<<endl;
}
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter the integer values :";
    cin>>a>>b;
    cout<<"Enter the float values :";
    cin>>x>>y;
    mul(a,b);
    mul(x,y);
    mul(a,x);
    mul(b,y);
}