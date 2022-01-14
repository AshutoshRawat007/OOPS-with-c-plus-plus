#include<iostream>
using namespace std;

class A{
	public:	A(int x){
			cout<<" A 's constructor with value :"<< x <<endl;
		}
};
class B : public A{
	public:	B(int a) : A(a) {
			cout<<"B 's constructoe with value : "<< a <<endl;
		}
};

int main(){
	B obj(10);
}