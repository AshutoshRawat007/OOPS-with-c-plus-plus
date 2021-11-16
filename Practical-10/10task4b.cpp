#include<iostream>
using namespace std;
class Num{
	string name;
	int age;
	public:
	void set(string name,int age)
	{
		this->name=name;
		this->age=age;
	}
	void get()
	{
		cout<<"age : "<<age<<endl;

	}
	friend Num operator+(Num ob1,Num ob2);
};
	Num operator+(Num ob1,Num ob2)
	{
		Num r;
		r.age=ob1.age+ob2.age;
		return r;
	}
	
int main()
{
	string n;int a;
	cout<<"enter name of person ";cin>>n;
	cout<<"enter age of person ";cin>>a;
	Num obj;
	obj.set(n,a);
	string name;int age;
	cout<<"enter name of person ";cin>>name;
	cout<<"enter age of person ";cin>>age;
	Num obj2;
	obj2.set(name,age);
	
	Num result=obj+obj2;
	result.get();
	
	
}
	