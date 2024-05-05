#include<iostream>
using namespace std;
class student
{
    public:
    char rno[10];
    char name[10];
    float m1,m2,m3;
    float avg;
    void read_data();
    void compute();
    void display();
};
void student :: read_data()
{
    cout<<"  Enter the Student Roll Number  :";
    cin>>rno;
    cout<<"  Enter the Student Name :";
    cin>>name;
    cout<<"  Enter the marks in three subjects :";
    cin>>m1>>m2>>m3;
}
void  student :: display()
{
    cout<<"\n ------------------------------------------------------";
    cout<<"\n                     Details";
    cout<<"\n ------------------------------------------------------"<<endl;
    cout<<"  Rollno is "<<rno;
    cout<<"\n Name is "<<name;
    cout<<"\n  Mark1 is "<<m1;
    cout<<"\n  Mark2 is "<<m2;
    cout<<"\n  Mark3 is "<<m3;
    cout<<"\n  Average mark of three subjects is "<<avg;
    cout<<"\n ------------------------------------------------------";
}
void student :: compute()
{
    avg=(m1+m2+m3)/3;
}
int main()
{
    student s[5];
    int n,i;
    cout<<"Enter the number of Students :";
    cin>>n;
    for(i=0;i<n;i++)
    s[i].read_data();
    for(i=0;i<n;i++)
    s[i].compute();
    for(i=0;i<n;i++)
    s[i].display();
}