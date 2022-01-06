// 1472A - Cards for Friends
#include<iostream>
using namespace std;
void cut_cards()
{
    int w,h,n,num=1;
    cin>>w>>h>>n;
    while(h%2==0||w%2==0)
    {
        if(h%2==0)
            h/=2;
        else
            w/=2;
        num*=2;
    }
    if(num>=n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main( )
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    cut_cards();
}

