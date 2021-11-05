#include<iostream>
using namespace std;
class area
{	public:
	area(int a)
	{
		cout<<"area of sq is "<<a*a<<endl;
	}
	area(int l,int b)
	{
		cout<<"area of rectngle is "<<l*b<<endl;
	}
};
int main()
{
	area sq(4);
	area rectangle(5,2);		
}