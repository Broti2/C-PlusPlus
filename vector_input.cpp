#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>num{2,7,11,15};
    int target=9;
    for(int x=0;x<4;x++)
    for(int y=1;y<4;y++)
    {
        if(num[x]+num[y]==9)
        cout<<x<<","<<y;
        else
        break;
    }
    cout<<num.size();
    return 0;
}