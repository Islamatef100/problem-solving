// 381A - Sereja and Dima
#include<iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main( )
{
    int n,serja=0,dima=0;
    cin>>n;
    int x=n-1,y=0;
    int *k=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(k[x]>k[y])
            {
                serja+=k[x];
                x--;
            }
            else
            {
                serja+=k[y];
                y++;
            }
        }
        else
        {
            if(k[x]>k[y])
            {
                dima+=k[x];
                x--;
            }
            else
            {
                dima+=k[y];
                y++;
            }
        }
    }
    cout<<serja<<" "<<dima<<endl;
}

