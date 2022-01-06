// 363B - Fence
#include <iostream>
using namespace std;
int main( )
{
    int n,k;
    cin>>n>>k;
    int*kk=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>kk[i];
    }
    for(int i=0;i<(n-(k-1));i++)
    {
        for(int t=i+1;t<i+k;t++)
        {
            kk[i]+=kk[t];
        }
    }
    cout<<endl;
    int min=0;
    for(int i=0;i<(n-(k-1));i++)
    {
        if(kk[min]>kk[i])
        {
            min=i;
        }
    }
    cout<<min+1<<endl;
}
