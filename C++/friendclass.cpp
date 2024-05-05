#include <iostream>
using namespace std;
class ClassB;
class ClassA 
{
    private:
        int numA;
        friend class ClassB;
    public:
        ClassA() : numA(9) {}
};
class ClassB 
{
    private:
        int numB;
    public:
        ClassB() : numB(9) {}
    int add() 
    {
        ClassA A;
        return A.numA + numB;
    }
};
int main() 
{
    ClassB B;
    cout << "Sum: "<<B.add();
    return 0;
}