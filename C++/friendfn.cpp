#include<iostream>
using namespace std;
class ABC;
class XYZ
{
	int x;
	public:
		void setdata(int a)
		{
			x=a;
		}
		
		friend void max(XYZ,ABC);
};
class ABC
{
	int y;
	public:
		void setdata(int a)
		{
			y=a;
		}	
		
	friend void max(XYZ,ABC);
};
void max(XYZ t1,ABC t2)
{
	if(t1.x>t2.y)
		cout<<t1.x;
	else
		cout<<t2.y;
}
int main()
{
	ABC abc;
	XYZ xyz;
	xyz.setdata(20);
	abc.setdata(35);
	max(xyz,abc);
	return 0;
}