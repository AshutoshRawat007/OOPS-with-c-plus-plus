#include<iostream>
using namespace std;
int main()
{
	
	cout<<"enter 1 for year || 2 for month || 3 for date "<<endl;
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"2021"<<endl;
			break;
		case 2:
			cout<<"october"<<endl;
			break;
		case 3:
			cout<<"13"<<endl;
			break;
		default:
			cout<<"wrong input"<<endl;
			break;
	}
}
