#include<iostream>
using namespace std;
class Person{
	string name;
	int age;
	public:
	Person(string name,int age)
	{
		this->name=name;
		this->age=age;
	}
	void get()
	{
		cout<<"Name : " <<name<<endl;
		cout<<"age : "<<age<<endl;

	}
};
int main()
{
	string name;int age;
	cout<<"enter name of person ";cin>>name;
	cout<<"enter age of person ";cin>>age;
	
	Person obj(name,age);
	Person *ptr=&obj;
	ptr->get();
}
	