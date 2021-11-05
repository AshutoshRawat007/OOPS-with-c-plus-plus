#include<iostream>
using namespace std;
class student
{		
	string name;	int age,marks;
	public:
	friend void total(student s1,student s2,student s3);
	void set(string name,int age,int marks);
	void show();
};
void student:: set(string name,int age,int marks)
	{
		this->name=name;
		this->age=age;
		this->marks=marks;
	}
void student::show()
	{
		cout<<"name "<<name<<" age "<<age<<" marks "<<marks<<endl;
	}
	
void total(student s1,student s2,student s3)
{
	cout<<"total marks of students "<<s1.marks+s2.marks+s3.marks<<endl;

}
int main()
{
	student s1,s2,s3;
	s1.set("apple",19,90);	s2.set("bal",18,95);	s3.set("cat",20,10);
	s1.show();	s2.show();	s3.show();
	total(s1,s2,s3);
}