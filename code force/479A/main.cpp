//Problem:     479A - Expression

#include <iostream>
using namespace std;

int main()
{
    
    
    int n,x[6],y[21],ans=0,k=0;
    cout<<"how many nambur:";
    cin>>n;
    cout<<"enter numbers\n";
    for(int i=0;i<119;i++)
    {
        if(i<7)
            x[i]=0;
        y[i]=0;
    }
    y[1]=1;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        y[0]+=x[i];
        y[1]*=x[i];
    }
    for(int i=0;i<n;i++ )
    {
        for(int j=0;j<n;j++ )
        {
            if(i==j)
                continue;
            else
                ans+=x[j];
        }
        y[i+2]=ans*x[i];
        ans=0;
        // cout<<y[i+2]<<endl;
    }
    
    k=y[0];
    for(int i=0;i<100;i++)
    {
        if( k<=y[i])
            k=y[i];
    }
    cout<<k<<endl;
}




