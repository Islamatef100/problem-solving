//750A A. New Year and Hurry

#include <iostream>
using namespace std;
int main()
{
    //
    int n,k,x=0,i;
    cout<<"enter n and k\n";
    cin>>n>>k;
    for( i=1;i<=n;i++)
    {
        x+=(5*i);
        if((x+k)>240)
            break;
    }
    cout<<i-1<<endl;
}
