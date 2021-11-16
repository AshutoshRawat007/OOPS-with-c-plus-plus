#include<iostream>
using namespace std;
class dir{
	 	
	 string name,head,address;
	 long tel,mobile;
	 public:
	 void set()
	 {
	 	cout<<"enter name of person ";cin>>name;
	 	cout<<"enter address of person ";cin>>address;
	 	int ch;
	 	cout<<"selct 1 if you have telephone number and 2 iff you have mobile  ";cin>>ch;
	 	if(ch==1)
	 	{cin>>tel;
	 	mobile=0;}
	 	else
	 	{cin>>mobile;tel=0;}
	 	
	 	cout<<"who is the head of the family   ";cin>>head;
	 }
	 void get()
	 {
		  cout<<"name :"<<name<<endl;
		  cout<<"addressss :"<<address<<endl;
		  if(tel==0)
		  cout<<"mobile numner : "<<mobile<<endl;
		  else
		  cout<<"telephone numner : "<<tel<<endl;
		  cout<<"the head od family is :"<<head<<endl;
	}	
};	 


int main()
{	
	dir arr[2]	;
	for(int i=0;i<2;i++)
		{arr[i].set();cout<<endl;}
		cout<<"the data on all people is  "<<endl;
	for(int i=0;i<2;i++)
		{arr[i].get();cout<<endl;}
}	