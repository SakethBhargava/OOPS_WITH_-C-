#include <iostream>
using namespace std;
int main()
{   
    int age;
    float height;
    char RegNo[15];
    char Name[20];
    char Address[100];

    cout << "enter your name :";
    cin >> Name;
    cout << "enter your Register number :";
    cin >> RegNo;
    cout << "enter your age :";
    cin >> age ;
    cout << "enter your height :";
    cin >> height;
    cout << "enter your address :";
    cin >> Address;

    cout << "your name is:"<<Name<<endl<<"Register number :"<<RegNo<<endl
    <<"your age :"<<age<<endl<<"your address :"<<Address<<endl;
}
