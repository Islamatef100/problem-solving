// 1353A - Most Unstable Array
#include<iostream>
#include<algorithm>
using namespace std;
void getmax()
{
    int n,m;
    // cout<<"enter n and m:\n";
    cin>>n>>m;
    if(n==1)
        cout<<"0"<<endl;
    else if(n==2)
        cout<<m<<endl;
    else
        cout<<m*2<<endl;
}
int main()
{
    int t;
    //  cout<<"entre t:";
    cin>>t;
    for(int i=0;i<t;i++)
    getmax( );
}
