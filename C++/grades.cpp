#include<iostream>
using namespace std;
int main()
{   char name[25];
    char RegNo[15];
	int sub1,sub2,sub3,sub4,sub5;
	int total;
	float percent;
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter Your Register Number : ";
    cin>>RegNo;
	cout<<"Enter marks of sub1 : ";
	cin>>sub1;
	cout<<"enter marks of sub2 : ";
	cin>>sub2;
	cout<<"enter marks of sub3 : ";
	cin>>sub3;
	cout<<"enter marks of sub4 : ";
	cin>>sub4;
	cout<<"enter marks of sub5 : ";
	cin>>sub5;
	total= sub1+sub2+sub3+sub4+sub5;
	percent=total/5.0;
	if(percent>=90)
	{
		cout<<"Grade=A";
	}
	else if(percent>=80)
	{
		cout<<"Grade=B";
	}
	else if(percent>=70)
	{
		cout<<"Grade=C";
	}
	else if(percent>=60)
	{
		cout<<"Grade=D";
	}
	else if(percent>=40)
	{
		cout<<"Grade=E";
	}
	else
	{
		cout<<"Gread F";
	}
}