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
        cout<<"Enter Name of the Student : ";
        cin>>name;
        cout<<"Enter Roll Number of the Student : ";
        cin>>rno;
    }
    void displaystudent()
    {
        cout<<"Name of the Student : "<<name<<endl;
        cout<<"Roll Number of the Student : "<<rno<<endl;
    }
};
class address : public student
{
    private:
    char city[20];
    public:
    void getaddress()
    {
        getstudent();
        cout<<"Enter city : ";
        cin>>city;
    }
    void displayaddress()
    {
        displaystudent();
        cout<<"city : "<<city<<endl;
    }
};
int main()
{
    address a1;
    a1.getaddress();
    a1.displayaddress();
}