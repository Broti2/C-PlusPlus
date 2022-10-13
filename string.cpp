#include<iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for(float i=0;i<k;i++){
    for(int o=k;o>i;o--){
        cout<<" ";
    }
    for(int j=0;j<i;j++)
    {
    
    cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
