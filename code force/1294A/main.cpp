// 1294A - Collecting Coins
#include <iostream>
using namespace std;
bool distribute_coins()
{
    int a,b,c,n;//number of coins for lice, Barbara, Cerene+number of all coin which we need distribute it;
    //cout<<"enter a,,c,n:";
    cin>>a>>b>>c>>n;
    int mx=max(a,max(b,c));
    int x;
    x=((mx-a)+(mx-b)+(mx-c));
    if(x==n)
        return true;
    else if(x<n)
    {
        n-=x;
        if(n%3==0)
            return true;
    }
    return false;
}
int main( )
{
    int t;//number of test cases.
    // cout<<"enter the number of test cases:";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        if( distribute_coins( ))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
