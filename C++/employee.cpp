#include<iostream>
using namespace std;
class employee
{
    private:
    int employeeid,basicpay;
    char name[50],dept[30];
    float da,hra,gpay,epf,lop,td,npay;
    public:
    void getdetails();
    void getcalculate();
    void getprint();
};
void employee :: getdetails()
{
    cout<<"Enter employee id :";
    cin>>employeeid;
    cout<<"Enter basic pay :";
    cin>>basicpay;
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter dept :";
    cin>>dept;
    cout<<"Enter lop :";
    cin>>lop;

}
void employee :: getcalculate()
{
    da=(basicpay/100)*80;
    hra=(basicpay/100)*20;
    gpay=basicpay+da+hra;
    epf=(basicpay/100)*12;
    td=epf+lop;
    npay=gpay-td;
}
void employee:: getprint()
{
    cout<<"--------------------------"<<endl;
    cout<<"****EMPLOYEE PAY SLIP****"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Employee id :"<<employeeid<<endl;
    cout<<"Employee name :"<<name<<endl;
    cout<<"Department :"<<dept<<endl;
    cout<<"Basic pay :"<<basicpay<<endl;
    cout<<"DA :"<<da<<endl;
    cout<<"HRA :"<<hra<<endl;
    cout<<"Gross pay :"<<gpay<<endl;
    cout<<"EPF :"<<epf<<endl;
    cout<<"TD :"<<td<<endl;
    cout<<"Net Pay :"<<npay<<endl;
};
int main()
{
    employee e1;
    e1.getdetails();
    e1.getcalculate();
    e1.getprint();
}