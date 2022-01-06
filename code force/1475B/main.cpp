//1475B - New Year's Number
#include <iostream>
using namespace std;
void newyear(int n)
{
    int x=n%2020;
    if(x<=n/2020)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
}
int main( )
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        newyear(n);
    }
}
