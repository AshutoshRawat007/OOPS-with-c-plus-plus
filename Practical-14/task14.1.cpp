#include<iostream>
using namespace std;
class parent{
	public: //compile tine binding
		 void count(){	
			cout<<"count no vlaue"<<endl;	} 
		void count(int c){
			cout<<"count value"<<endl;}	
		 //run time bnding
		virtual void show(){
			cout<<" tis is parent "<<endl;
		}
};
class cc: public parent{
	public: //run time binding	
		void show(){
			cout<<"tis child"<<endl;
		}
};
int main(){
	cc obj;
	parent *p=&obj;
	p->count(10);
	p->show();
}