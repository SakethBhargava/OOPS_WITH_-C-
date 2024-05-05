#include <iostream>
using namespace std;
template <typename T>
class calc
{
    private:
        T num1,num2;
    public:
        calc(T n1,T n2)
        {
            num1=n1;
            num2=n2;
        }

    void display()
    {
        cout<<"Summation is :"<<add()<<endl;
        cout<<"Subtraction is :"<<sub()<<endl;
        cout<<"Multiplication is :"<<mul()<<endl;
        cout<<"Division is :"<<divs()<<endl;
    }
    T add()
    {
        return num1 + num2;
    }
    T sub()
    {
        return num1 - num2;
    }
    T mul()
    {
        return num1 * num2;
    }
    T divs()
    {
        return num1 / num2;
    }
};
int main()
{
    calc <int> c1(2,1);
    calc <float> c2(1.5,2.5);
    cout<<"***Arithmetic operations for integers***"<<endl;
    cout<<"----------------------------------------"<<endl;
    c1.display();
    cout<<endl;
    cout<<"***Arithmetic operations for float***"<<endl;
    cout<<"-------------------------------------"<<endl;
    c2.display();
}