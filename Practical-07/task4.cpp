#include<iostream>
using namespace std;
int main()
{
	int n=3;
	int a[n][n];
	int b[n][n];	
	cout<<"enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		 for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"new aray array task 4 reverse "<<endl;
	for(int i=0;i<n;i++)
	{
		 for(int j=0;j<n;j++)
		{
			b[i][j]=a[n-1-i][n-1-j];
			cout<<" "<<b[i][j];
		}
			cout<<endl;
	}
}
