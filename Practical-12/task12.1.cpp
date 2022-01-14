#include<iostream>
using namespace std;

class parent{
	public : int a=10;
	protected : int b=20;
	private : int c=30;
};
class child: public parent{
	public : void display(){
		cout<<" public a(parent) : "<<a <<endl;
		cout<<"private b(parent) :" <<b<<endl;
		//cout<<"private c(parent) :" <<c<<endl;
		}
};

int main(){
	child c;
	c.display();
}