// 1358A - Park Lighting
#include <iostream>
using namespace std;
int main( )
{
    int t,n,m;
    // cout<<"enter numberof test case:";
    cin>>t;
    while(t--)
    {
        //   cout<<"enter the number rows and colums:";
        cin>>n>>m;
        int x=n*m;//i do that to increase the preformance.i can do it in for loap with all tests.
        int y=x%2;//i do that to increase the preformance.
        cout<<x/2+y<<endl;
    }
}
