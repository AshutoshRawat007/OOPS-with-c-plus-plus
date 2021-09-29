#include<iostream>
namespace first{
  void add(int n1,int n2){
   std:: cout<<"sum of integers = "<<n1+n2;
  }
}
namespace second{
  void add(float n1,float n2){
    std::cout<<"sum of floats = "<<n1+n2;
  }
}
int main()
{
  first::add(10,20);
  second::add(5.5,15.5);
}
