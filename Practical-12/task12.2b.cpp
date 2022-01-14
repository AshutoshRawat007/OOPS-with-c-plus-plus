#include<iostream>
using namespace std;

class A{
public:	~A(){
		cout<<" A 's distructor "<<endl;
		}
};
class B : public A{
public:	~B(){
		cout<<"B 's distructoe "<<endl;
		}
};
class C : public B{
public:	~C(){
		cout<<" c's distructor "<<endl;
	}
};

int main(){
	C obj;
}