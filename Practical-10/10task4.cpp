#include<iostream>
using namespace std;
class TOL{
	int num;
	public:
	void set(int num)
	{
		this->num=num;
	}
	void get()
	{
		cout<<"num : "<<num<<endl;

	}
	friend TOL operator<(TOL ob1,TOL ob2);
};
	TOL operator<(TOL ob1,TOL ob2)
	{
		TOL r;
		if(ob1.num<ob2.num)	r.num=1;
		else		r.num=0;
		return r;
	}
	
int main()
{
	int a;	cout<<"enter number ";cin>>a;
	TOL obj;
	obj.set(a);
	int age;cout<<"enter num ";cin>>age;
	TOL obj2;
	obj2.set(age);
	
	TOL result=obj<obj2;
	result.get();
	
	
}
	