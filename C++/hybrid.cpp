#include<iostream>
using namespace std;
class student
{
    protected:
        int roll;
    public:
    void getroll(int a)
    {
        roll=a;
    }
    void putroll()
    {
        cout<<"Roll no :"<<roll<<endl;
    }
};
class test : public student
{
    protected:
        float part1,part2;
    public:
    void getmarks(float x, float y)
    {
        part1=x;
        part2=y;
    }
    void putmarks()
    {
        cout<<"Marks obtained :"<<endl;
        cout<<"Part 1 :"<<part1<<endl;
        cout<<"Part 2 :"<<part2<<endl;
    }
};
class sports
{
    protected:
        float score;
    public:
    void getscore(float s)
    {
        score=s;
    }
    void putscore ()
    {
        cout<<"Sports Score :"<<score<<endl;
    }
};
class result : public test,public sports
{
    float total;
    public:
    void display()
    {
        total=part1+part2;
        putroll();
        putmarks();
        putscore();
        cout<<"Total Score :"<<total<<endl;
    }
};
int main()
{
    result r1;
    r1.getmarks(90,80);
    r1.getroll(38);
    r1.getscore(10);
    r1.display();
}