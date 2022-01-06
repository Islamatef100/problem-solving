// 1371A - Magical Sticks
#include<iostream>
using namespace std;
int how_many_stick( )
{
    int n,x=0;
    // cout<<"enter n:";
    cin>>n;
    x=n/2;
    if(n%2==1)
        return x+1;
    else
        return x;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    cout<<how_many_stick( )<<endl;
}

