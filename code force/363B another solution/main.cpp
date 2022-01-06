// 363B - Fence
#include <iostream>
using namespace std;
int main( )
{
    int n,k;
    // cout<<"enter n and k:";
    cin>>n>>k;
    int*kk=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>kk[i];
    }
    int*kkk=new int[n-(k-1)];
    for(int i=0;i<(n-(k-1));i++)
    {
        kkk[i]=kk[i];
        for(int t=i+1;t<i+k;t++)
        {
            kkk[i]+=kk[t];
        }
        //    cout<<kkk[i]<<" ";
    }
    cout<<endl;
    int min=0;
    for(int i=0;i<(n-(k-1));i++)
    {
        if(kkk[min]>kkk[i])
        {
            min=i;
        }
    }
    cout<<min+1<<endl;
}
