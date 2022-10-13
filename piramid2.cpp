#include<iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for(int j=0;j<k;j++)
    {
        for(int q=0;q<j;q++)
        {
        cout<<" ";
        }
        for(int w=0;w<(k-j);w++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}