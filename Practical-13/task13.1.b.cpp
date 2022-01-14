#include<iostream>

class base
{
 public:
 int add(int a,int b)
 {
     return (a+b);
 }
 float add(float a,float b)
 {
     return (a+b);
 }
};
class child:public base
{
 public:										
 int add(int a,int b)
 {
     return (a+b+1);
 }
 float add(float a,float b)
 {
     return (a+b+1);
 }
};
int main()
{
    child c;
    std::cout<<c.add(2,3)<<std::endl;
    std::cout<<c.add((float)2.0,(float)7.0);
    std::cout<<"  cant see add of base class";
}
