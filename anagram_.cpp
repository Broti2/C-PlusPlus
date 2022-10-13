
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c,f;
    int dum=0,sum=0;
    cin>>c;
    cin>>f;
    if(c.length()!=f.length())
    cout<<"not an anagram";
    else
    for(int x:c)
    {
        sum=int(x)+sum;
    }
    
    for(int x:f)
    {
        dum=int(x)+dum;
    }
    if(sum==dum)
    cout<<"anagram";
    else
    cout<<"not an anagram";
    return 0;
}