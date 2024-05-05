#include<iostream>
#include<string.h>
using namespace std;
const int sz=80;
class string1
{
    char str[sz];
    public:
    string1()
    {
        strcpy(str,"");
    }
    string1(char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str<<"\n";
    }
    string1 operator + (string1 ss)
    {
        if(strlen(str)+strlen(ss.str)<sz)
        {
            string1 temp;
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);
            return temp;
        }
        else
        cout<<"string overflow";
        return 0;
    }
};
int main()
{
    string1 s1,s2,s3;
    s1="hello";
    s2="world";
    s3=s1+s2;
    s1.display();
    s2.display();
    s3.display();
}