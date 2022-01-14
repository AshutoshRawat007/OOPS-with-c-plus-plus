#include<iostream>
using namespace std;

class A{
public:	A(){
		cout<<" A 's constructor "<<endl;
		}
};
class B : public A{
public:	B(){
		cout<<"B 's constructoe "<<endl;
		}
};
class C : public B{
public:	C(){
		cout<<" c's constructor "<<endl;
	}
};

int main(){
	C obj;
}