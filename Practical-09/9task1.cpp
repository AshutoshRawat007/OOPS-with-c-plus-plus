//a. WAP to assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
#include<iostream>
using namespace std;
class Student
{
	public:
	int roll;
	long phn;
	string address;
	string name;
	
	
	void showdata()
	{
		cout<<"name - "<<name<<endl;
		cout<<"roll no - "<<roll<<endl;
		cout<<"phone - "<<phn<<endl;
		cout<<"address - "<<address<<endl;
	}
};

int main()
{
	Student sam,john;
	sam.name="Sam";		sam.roll=21;	sam.phn=1230456798;	sam.address="22 b bakerst";
	sam.showdata();
	john.name="John";	john.roll=11;	john.phn=9999333365;	john.address="16 welinghton st.";
	john.showdata();
}
	