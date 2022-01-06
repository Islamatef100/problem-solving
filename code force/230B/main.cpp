//B. T-primes 230B

#include <iostream>
using namespace std;
int main()
{
    cout<<"enter lines number\n";
    int x,y=0;
    cin>>x;
    long long *z= new   long long[x];
    cout<<"enter the numbers\n";
    for(int i=0;i<x;i++)
    {
        cin>>z[i];
    }
    for(int i=0;i<x;i++)
    {
        for(int t=2;t<z[i];t++)
        {
            if(z[i]%t==0)
                y++;
            if(y>1)
                break;
        }
        if(y==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        y=0;
    }
}
