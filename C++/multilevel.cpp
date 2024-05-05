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
            cout<<"Name of the student :"<<name<<endl;
            cout<<"Roll number of the student :"<<rno<<endl;
        }
};
class test: public student
{
    protected:
        int maths,eng,sci;
    public:
        void gettest()
        {
            getstudent();
            cout<<"Enter maths marks :";
            cin>>maths;
            cout<<"enter english marks :";
            cin>>eng;
            cout<<"Enter science marks :";
            cin>>sci;
        }
        void displaytest()
        {
            displaystudent();
            cout<<"Maths marks :"<<maths<<endl;
            cout<<"English marks :"<<eng<<endl;
            cout<<"Science marks :"<<sci<<endl;
        }
};
class result : public test
{
    private:
        int total,avg;
    public:
        void getresult()
        {
            gettest();
            total = maths+eng+sci;
            avg = total/3;
        }
        void displayresult()
        {
            displaytest();
            cout<<"Total Marks :"<<total<<endl;
            cout<<"Average marks :"<<avg<<endl;
        }
};
int main()
{
    result r1;
    r1.getresult();
    cout<<"--------------------------";
    cout<<endl;
    r1.displayresult();
}