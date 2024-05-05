#include<iostream>
#include<string.h>
using namespace std;
const int sz=90;
class string1
{
    private:
        char *str;
    public:
    string1()
    {

    }
    string1(char*s)
    {
        int length =strlen(s);
        str=new char[length+1];
        strcpy(str,s);
    }
    ~string1()
    {
        cout<<"Delete Str"<<endl;
        delete[]str;
    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    string1 s1;
    s1="Memory allocation in c++";
    cout<<"s1 :";
    s1.display();
}