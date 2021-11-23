#include<iostream>
using namespace std;
int main()
{
	char ch[10];
	cin.getline(ch,10);
	cout<<"ch is = "<< ch;
}
/* no error we need cin.getline because 
   if we only use cin it will take input but
   without space ....so cin.getline help us to take 
   entire input even with spaces.
 */