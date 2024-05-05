#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
    void setvalue()
    {
        a=25,b=40;
    }
    friend float Mean(sample s);

};
float Mean(sample s)
{
    return(s.a+s.b)/2.0;
}
int main()
{
    sample x;
    x.setvalue();
    cout<<"mean value : "<<Mean<<endl;
}