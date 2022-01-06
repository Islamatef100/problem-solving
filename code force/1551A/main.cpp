// 1551A - Polycarp and Coins
#include <iostream>
using namespace std;
int main( )
{
    int t,n;
    // cout<<"enter numberof test case:";
    cin>>t;
    while(t--)
    {
        //   cout<<"enter the number of brules:";
        cin>>n;
        int x=n%3;//i do that to increase the preformance.i can do it in for loap with all tests.
        int y=n/3;//i do that to increase the preformance.
        if(x==0)
            cout<<y<<" "<<y<<endl;
        else if(x==1)
            cout<<y+1<<" "<<y<<endl;
        else
            cout<<y<<" "<<y+1<<endl;
    }
}
