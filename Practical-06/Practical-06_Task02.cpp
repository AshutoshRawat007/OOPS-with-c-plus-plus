#include<ioastream>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int i=0,j=a.length()-1,c=0;
	while(i<j){
		if(a[i]!=a[j]){
			c++;break;}
		i++;j--;
		}
	if(c==0)
		cout<<"yes pallindrome"<<endl;
	else
		cout<<"not apllindrome"<<endl;
}
	