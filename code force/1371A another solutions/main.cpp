//1371A - Magical Sticks
#include<iostream>
using namespace std;
int how_many_stick( )
{
    int n,x=0;
    // cout<<"enter n:";
    cin>>n;
    int i=0;
    while(1)
    {
        ++i;
        x+=i;
        if(x>n)
        {   x-=(i-1);--i;}
        if(x==n)
            return i;
        
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    cout<<how_many_stick( )<<endl;;
}

