#include<iostream>
using namespace std;
class sttc
{	public:
	int a;
	
	void area()
	{
		static int x=0;x++;
		cout<<"area is called "<<x<<" times"<<endl;
	}
	
};
int main()
{
	sttc a1,a2,a3;
	a1.a=5;		a1.area();
	a2.a=6;		a2.area();
	a3.a=7;		a3.area();		
}