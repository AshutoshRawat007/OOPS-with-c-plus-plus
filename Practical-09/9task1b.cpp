#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int age,year;
	char sec;
	float marks;
	double showdata(double total)
	{
		cout<<"name - "<<name<<" ";	cout<<"age - "<<age<<" ";  cout<<"year - "<<year<<" ";
		cout<<"sec - "<<sec<< " ";
		cout<<"marks - "<<marks<<endl;
		total=total+marks;
		return total;
	}

};
int main()
{
	Student a[5];double total=0.0;
	for(int i=0;i<5;i++)
	{	
		cout<<"name ";	cin>>a[i].name;
		cout<<"age ";	cin>>a[i].age;
		cout<<"year ";	cin>>a[i].year;
		cout<<"sec ";	cin>>a[i].sec;
		cout<<"marks ";	cin>>a[i].marks;
		total=a[i].showdata(total);	
	}
	cout<<"total marks of students in collenge"<< total;
	
}
	