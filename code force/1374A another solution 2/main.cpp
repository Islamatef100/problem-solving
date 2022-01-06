
//1374A - Required Remainder

#include <iostream>
using namespace std;
int main( )
{
    //input x,y,n;
    //output k
    //k%x=y;
    //0<k<n
    //  cout<<"enter t:";
    int t=0;
    cin>>t;
    int*x=new int[t];
    int*y=new int[t];
    int*n=new int[t];
    // cout<<"enter theelements:\n";
    for(int i=0;i<t;i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>n[i];
    }
    for(int i=0;i<t;i++)
    {
        if(n[i]<x[i])
            cout<<"0\n";
        else
        {
            n[i]-=y[i];
            long int s=n[i]/x[i];
            s*=x[i];
            s+=y[i];
            cout<<s<<endl;
        }
    }
}
