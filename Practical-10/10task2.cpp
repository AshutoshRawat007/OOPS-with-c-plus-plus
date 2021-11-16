#include<iostream>
using namespace std;
class Student{
	string name;
	char sec;
	float marks;
	public:
	void set()
	{
		cout<<"enter name of stdent ";cin>>name;
		cout<<"which section do he belong to ";cin>>sec;
		cout<<"how much marks did he got ";cin>>marks;
	}
	void get()
	{
		cout<<"Name : " <<name<<endl;
		cout<<"section : "<<sec<<endl;
		cout<<"Marks : "<<marks<<endl;
	}
};
int main()
{
	Student obj;
	obj.set();
	Student *ptr=&obj;
	ptr->get();
}
	