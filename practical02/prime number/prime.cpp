#include<iostream>
using namespace std;
int squareroot(int n);

int prime(int n)
{
    int c=0;
    if(n%2==0&&n!=2)
        c++;
    if(n%3==0&&n!=3)
        c++;
    if(n%3==0&&n!=5)
        c++;
    if(n%3==0&&n!=7)
        c++;
    if(n%squareroot(n)==0)
        c++;

    if(c==0)
        return 1;
    if(c!=0)
        return 0;
}

int squareroot(int n)
{
    if (n == 0 || n== 1)
         return n;
    int i = 1, result = 1;
    while (result <= n)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(prime(n)==1)
        cout<<"the number is prime"<<endl;
    else
        cout<<"number is not prime"<<endl;

}

