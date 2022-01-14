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
	}
};

int main(){
	child c;
	cout<<"access a with obj : "<<c.a<<endl;
	//cout<<"b from obj : "<<c.b;
}