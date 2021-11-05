#include<iostream>
using namespace std;
class college
{
	public:
	string name;
	int year,stid;
	void set(string n, int y,int sid)
	{
		name = n;
		year=y;
		stid=sid;
	}
	void get()
	{
		cout<<"name "<<name<<" yeer "<<year<<" student id "<<stid<<endl;
	}
};
struct student{
	string name;  int year;  int stid;
	};
int main()
{
	college cd;
	cd.set("voila",3,2001156); cd.get();
	 struct student std;
	std.name="veronica";
	std.year=2; std.stid=2014568;
	
	cout<<"name "<<std.name<<" yeer "<<std.year<<" student id "<<std.stid<<endl;
}