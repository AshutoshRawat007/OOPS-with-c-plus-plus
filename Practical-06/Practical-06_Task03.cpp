#include<algorithm>
#include<ioastream>
#include<string>
using namespace std;
int main(){
	string a;
	string str="";
	
	getline(cin,a);
	strring b=a;
	int i=0,j=a.length()-1;
	while(j>=0){
		str=str+a[j];
		j--;
		}
	cout<<"reverse manually---->"<<str<<endl;
	
	reverse(b.begin(),b.end());
		cout<<"reverse with function--->"<<b<<endl;
		
}
	