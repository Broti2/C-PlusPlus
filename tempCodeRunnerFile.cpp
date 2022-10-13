#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=n;i>=0;i--)
    {
    for(int j=0;j<=i;j++)
    {
        cout<<" ";
    }
        for(int x=0;x<=n-i;x++)
        {
            cout<<"* ";
        }
    cout<<endl;
    }
    for(int j=0;j<=k;j++)
    {
        for(int q=0;q<=j;q++)
        {
        cout<<" ";
        }
        for(int w=0;w<=(k-j);w++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
