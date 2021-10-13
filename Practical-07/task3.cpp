#include<iostream>
using namespace std;
int main()
{
	int n=3;
	int a[n][n];	
	cout<<"enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		 for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"new aray array task 3 10-aij"<<endl;
	
	for(int i=0;i<n;i++)
	{
		 for(int j=0;j<n;j++)
		{
			a[i][j]=10-a[i][j];
			cout<<" "<<a[i][j];
		}
			cout<<endl;
	}
}
