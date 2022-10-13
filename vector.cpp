#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>t(5);
for(auto &x:t)
{
    cin>>x;
}
sort(t.begin(),t.end(),greater());
t.pop_back();
t.push_back(56);
for(auto x:t)
{
cout<<x<<" ";
}
return 0;
}