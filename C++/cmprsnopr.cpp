#include <iostream>
using namespace std;
class Time
{
    private:
    int hour,min,sec;
    public:
    Time()
    {
        hour=0;
        min=0;
        sec=0;
    }
    Time(int h,int m,int s)
    {
        if(h>0 && h<=23 && m>0 && m<=59 && s>0 && s<=59)
            {
                hour=h;
                min=m;
                sec=s;
            }  
        else
        cout<<"Invalid time";
    }
    int operator == (Time t3)
    {
        return(hour==t3.hour&&
                min==t3.min&&
                sec==t3.sec);
    }
};
int  main()
{
    Time t1(7,11,30);
    Time t2(3,30,42);
    if (t1==t2)
        cout<<"Clock shows same time";
    else
        cout<<"Clock shows different time";

}