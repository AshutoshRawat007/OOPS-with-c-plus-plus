#include<iostream>
using namespace std;
int main(){
	string a,b;int x;
	cout<<"enter a--> ";
		cin>>a;
	cout<<"enter b--> ";
		cin>>b;
	x=a.compare(b);
	cout<<"a.comapre(b) is --> "<< x <<endl;
}
// x>0 => when a is greater than b in ascii value

// x<0=> when a is less than b in ascii value

//x==0 equal
//x==4 when ascii a-b=4