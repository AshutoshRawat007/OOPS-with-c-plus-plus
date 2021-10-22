#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==1)
		return 1;
	else 
		return factorial(n-1)*(n);		 
		  		
		
}

int main()
{
	int n;
	cout<<"enter number the to find factorial"<<endl;
	cin>>n;
	int x=factorial(n);
	cout<<"factorial is="<<x;
}
