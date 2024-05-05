#include<iostream>
using namespace std;
void display(char c='*',int i=1 );
void display(char c,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
    cout<<c<<endl;
    }
}

int main()
{
    cout<<"when no argument passed"<<endl;
    display();
    cout<<"When one argument is pasesd"<<endl;
    display('#');
    cout<<"when two arguments are passed"<<endl;
    display('&',6);
}