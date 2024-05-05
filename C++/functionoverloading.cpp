#include <iostream>
using namespace std;
void display(int var1,double var2) 
{
    cout<< "Integer number: " <<var1;
    cout<< " and double number: " <<var2<< endl;
}
void display(double var) 
{
    cout<< "Double number: " <<var<< endl;
}
void display(int var) 
{
    cout<< "Integer number: " <<var<< endl;
}
int main()
{
    int a;
    double b;
    cout<<"enter the values of a,b: ";
    cin>>a>>b;
    display(a);
    display(b);
    display(a,b);
    return 0;
}