//ASHUtosh Rawat
#include<ioastream>
#include<string>
using namespace std;
int main(){
	string a,b;
	cout<<"		enter a  " <<endl;
	getline(cin,a);
	cout<<"		enter b  " <<endl;
	getline(cin,b);
	
	int c=0;
	int la=a.length()
	int lb=b.length();
	cout<<"comapared MANUALLY"<<endl;
	if(la!=lb)
		c=la-lb;
	if(la==lb)
	{
		for(int i=0;i<la;i++)
		{	if(a[i]!=b[i])
			{	c=(int)(a[i]-b[i]);break;   }
		}
	}
	if(c==0)
		cout<<"equal"<<endl;
	if(c!=0)
		cout<<c<<endl;
	c=a.compare(b);//<------------compare function of c++
	cout<<"compare using function " << endl;
	if(c==0)
		cout<<"equal"<<endl;
	if(c!=0)
		cout<<c<<endl;
	
	
	
		
}
	