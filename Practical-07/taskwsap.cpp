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
	for(int i=0;i<n;i++)
	{
		 for(int j=0;j<n;j++)
		{
			if(i==j)
				break;
			int temp=a[i][j];
			a[i][j]=a[n-1-i][n-1-j];
			a[n-1-i][n-1-j]=temp;
		}
	}
	cout<<"new aray array after swap without extra space"<<endl;
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
