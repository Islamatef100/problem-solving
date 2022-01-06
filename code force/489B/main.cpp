//489B - BerSU Ball


#include<iostream>
using namespace std;
bool balance(int x,int y)
{
    if(x==y||x==y+1||x+1==y)
    {return 1;}
    return 0;
}
int Berland( )
{
    int z=0;
    int n;
    //cout<<"entre n:";
    cin>>n;
    int* ai=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ai[i];
        for(int t=i;t>0;t--)
        {
            int x=0;
            if(ai[t]<ai[t-1])
            {x=ai[t];ai[t]=ai[t-1];ai[t-1]=x;}
        }
        
    }
    int m;
    //   cout<<"entre m:";
    cin>>m;
    int* bi=new int[m];
    for(int i=0;i<m;i++)
    {
        cin>>bi[i];
        for(int t=i;t>0;t--)
        {
            int x=0;
            if(bi[t]<bi[t-1])
            {x=bi[t];bi[t]=bi[t-1];bi[t-1]=x;}
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(balance(ai[i], bi[i]))
            ++z;
    }
    return z;
}
int main()
{
    while(1)
    {
        cout<<Berland( )<<endl;
    }
    }
