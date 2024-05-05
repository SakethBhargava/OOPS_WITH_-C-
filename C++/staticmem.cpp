#include<iostream>
using namespace std;
class item1
{
    static int s;
    int number;
public:
    void getdata(int a)
    {
        number = a;
        s++;
    }
    void getcount()
    {
        cout<<"count value is : "<<s<<endl;
    }
};
int item1 :: s;
int main()
{
    item1 a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"after read data : "<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
}