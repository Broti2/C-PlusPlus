// C++ program to check whether two strings are anagrams
// of each other
#include <bits/stdc++.h>
using namespace std;
bool ana(string c,string b)
{
int y=b.length();
    int x=c.length();
      int sum=0,dum=0;
    if(x!=y)
    return false;
    else
    for(int z=0;z<x;z++)
    {
        sum=int(c[z])+sum;
        dum=int(b[z])+dum;
    }
     if (sum==dum)
     return true;
     else
     return false;
     }

int main()
{
    string c,b;
  
    cin>>c;
    cin>>b;
    if(ana(c,b))
    cout<<"yes its an anagram";
    else
    cout<<"both strings aree not an anagram of each other";
    return 0;
}