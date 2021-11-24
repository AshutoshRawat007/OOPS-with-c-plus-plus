//ASHUtosh Rawat
#include<iostream>

using namespace std;
int main(){
	string a;
	cout<<"		enter a  "<< endl;
	getline(cin,a);
	
	cout<<"		initial address of a-->"<< &a <<endl;
	a[0]='x';
	cout<<"a is "<< a << endl<<" address after change is --> "<< &a <<endl;
}