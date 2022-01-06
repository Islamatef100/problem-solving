//160A twins



#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n=0,sum1=0,sum2=0;
    cout<<"enter number of coins:";cin>>n;
    int t[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter coin number "<<i+1<<":" ; cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<n;i++)
        {
            if(i+1<n)
            {
                if(t[i]<t[i+1])
                {
                    swap(t[i],t[i+1]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        sum1+=t[i];
        for(int l=i+1;l<n;l++)
        {
            sum2+=t[l];
        }
        if(sum1>sum2)
        {
            cout<<"sum coins is:"<<sum1
            <<"\nnumber coins is:"<<i+1<<endl;
            break;
        }
        else
            sum2=0;
    }
}
