#include<iostream>
using namespace std;
int main(){
	string as="apple",bs="good;
	int ai=69,bi=21;
	float=12.36,bf=1.23;
	
	cout<<"string + string = "<< as+bs << endl;
	cout<<"int + int = "<< ai + bi << endl;
	cout<<"float + float = "<< af + bf << endl;
	cout<<"flaot + int = "<< af + ai << endl;
	cout<<"int + flaot = "<< ai + af << endl;
	cout<<"string + int = "<< as + ai << endl;
	cout<<"string + float = "<< as + af << endl;
}
// error no match for operator in ---> string + int ans string + float as 
// + plus operator is not defined for these data type combination
//OUTPUT IS FLOAT for [ int + float and float + int ]
