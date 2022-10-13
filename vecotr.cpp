#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>j(5);
    for(auto &x:j)
    {
    cin>>x; 
    }
sort(j.begin(),j.end());

    for(auto x:j)
    cout<<x;

    return 0;
}