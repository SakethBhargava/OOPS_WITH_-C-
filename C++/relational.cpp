#include <iostream>
using namespace std;
class student
{
    private:
    int feet;
    int inches;
    public:
    student()
    {
        feet=0;
        inches=0;
    }
    void getheight(int f,int i)
    {
        feet=f;
        inches=i;
    }
    int operator > (student s3)
    {
        if(feet>s3.feet)
        return 1;
        else if (feet==s3.feet && inches>s3.inches)
        return 0;
        else 
        return 0;
    }
};
int main()
{
    student s1,s2;
    s1.getheight(5,10);
    s2.getheight(6,1);
    if(s1>s2)
        cout<<"s1 is taller"<<endl;
    else if(s2>s1)
        cout<<"s2 is taller"<<endl;
    else
        cout<<"Both are equal in height"<<endl;
}