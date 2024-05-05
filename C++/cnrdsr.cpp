#include <iostream>
using namespace std;
int count=0;
class test
{
    int a,b,c;
    public:
        test ()
        {
            count++;
            cout<<"\n constructor msg object number "<<count<<" created ";
        }
        ~test ()
        {
            cout<<"\n destructor msg object number "<<count<<" destroyed ";
            count--;
        }
};
int main()
{
    cout<<"\n Inside the main function";
    test t1;
    {
        //block 1
        cout<<"\n Inside block 1";
        cout<<"\n creating two more objects t2 & t3";

        test t2,t3;
        cout<<"\n leaving block 1";
    }
    cout<<"\n Block inside the main";
}