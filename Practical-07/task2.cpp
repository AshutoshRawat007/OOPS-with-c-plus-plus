#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	time_t ttime = time(0);
    
		char* dt = ctime(&ttime);
	cout << "The current local date and time is: " << dt[0] << endl;

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
