#include <iostream>
#include <conio.h>
using namespace std; 
class customer
{
    char id[12];
    int unit;
    int currentreading;
    int previousreading;
    char custname[30],address[50],date[10];
    float amount;
    public:
    void getcustdetails();
    void getcalculate();
    void print();
};
int main()
{
    customer c1;
    c1.getcustdetails();
    c1.getcalculate();
    c1.print();
    getch();
}
void customer::getcustdetails()
{
    cout<<"Customer Id : "<<endl;
    cin>>id;
    cout<<"Customer Name : "<<endl;
    cin>>custname;
    cout<<"Date : "<<endl;
    cin>>date;
    cout<<"Address : "<<endl;
    cin>>address;
    cout<<"Current Reading : "<<endl;
    cin>>currentreading;
    cout<<"Previous Reading"<<endl;
    cin>>previousreading;
}
void customer::getcalculate()
{   
    int currentreading;
    int previousreading;
    float amount;
    unit = (currentreading - previousreading);

    if (unit<=100)
        amount=(unit*1);
    else if(unit<=200)
        amount=(unit*1)+(unit-100)*3;
    else if(unit<=300)
        amount=(100*1)+(100*3)+(unit-200)*5;
    else if(unit>300)
        amount=(100*1)+(100*3)+(100*5)+(unit-300)*8;
}
void customer :: print()
{
    cout<<"---------------"<<endl;
    cout<<"ELECTRIC BILL"<<endl;
    cout<<"---------------"<<endl;
    cout<<"Customer Name : "<<custname<<endl;
    cout<<"Customer Id : "<<id<<endl;
    cout<<"Date : "<<date<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Current Reading : "<<currentreading<<endl;
    cout<<"Previous Reading : "<<previousreading<<endl;
    cout<<"No. Of Units : "<<unit<<endl;
    cout<<"Total Amount : "<<amount<<endl;
}