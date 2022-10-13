#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
    if(n==1||n==0)
    {
    return n;
    }
    else
    {
    return fact(n-1)*n;
    }
}
int main()
{
cout<<"Enter any number:";
int n;
cin>>n;
cout<< fact(n);
getch();
}