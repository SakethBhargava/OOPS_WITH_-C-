#include<iostream>
using namespace std;
class student
{
    private:
    char name[20];
    int rno;
    public:
    void getstudent()
    {
        cout<<"Enter name of the student :";
        cin>>name;
        cout<<"Enter roll number of the student :";
        cin>>rno;
    }
    void displaystudent()
    {
        cout<<"Name of the Student :"<<name<<endl;
        cout<<"Roll Number :"<<rno<<endl;
    }
};
class address
{
    private:
    char city[20];
    public:
    void getaddress()
    {
        cout<<"Enter city :";
        cin>>city;
    }
    void displayaddress()
    {
        cout<<"City :"<<city<<endl;
    }
};
class account:public student, public address
{
    private:
    int tfee,submit,balance;
    public:
    void getaccount()
    {
        getstudent();
        getaddress();
        cout<<"Enter total fee :";
        cin>>tfee;
        cout<<"Enter submit fee :" ;
        cin>>submit;
    }
    void displayaccount()
    {
        displaystudent();
        displayaddress();
        cout<<"Total fee :"<<tfee<<endl;
        cout<<"Submit fee :"<<submit<<endl;
        balance=tfee-submit;
        cout<<"Balance fee :"<<balance<<endl;
    }
};
int main()
{
    account a1;
    a1.getaccount();
    cout<<"---------------------------";
    cout<<endl;
    a1.displayaccount();
}