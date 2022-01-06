//1399B - Gifts Fixing

#include <iostream>
using namespace std;
void how_mwny_move( )
{
    int min1=0,min2=0;
    long long n=0,sum=0;
    //  cout<<"enter how many gift:";
    cin>>n;
    int *k=new int[n];
    int *k2=new int[n];
    cin>>k[0];
    min1=k[0];
    for(int i=1;i<n;i++)
    {
        cin>>k[i];
        if(min1>k[i])
            min1=k[i];
    }
    cin>>k2[0];
    min2=k2[0];
    for(int i=1;i<n;i++)
    {
        cin>>k2[i];
        if(min2>k2[i])
            min2=k2[i];
    }
    for(int i=0;i<n;i++)
    {
        if(k[i]!=min1 && k2[i]!=min2)
        {
            if( (k[i]-min1)>(k2[i]-min2))
            {
                // k2[i]=k2[i]-(k2[i]-min2);
                sum+=(k[i]-min1);
                //    cout<<"sum="<<sum<<endl;
            }
            else  if( (k[i]-min1)<=(k2[i]-min2))
            {
                // k[i]=k[i]-(k[i]-min1);
                sum+=(k2[i]-min2);
                //  cout<<"sum="<<sum<<endl;
            }
        }
        else
        {
            if(k[i]!=min1)
            {
                sum+=(k[i]-min1);
                //       cout<<"sum="<<sum<<endl;
            }
            if(k2[i]!=min2)
            {
                sum+=k2[i]-min2;
                //     cout<<"sum="<<sum<<endl;
            }
            //cout<<"sum="<<sum<<endl;
        }
    }
    delete []k;
    delete []k2;
    cout<< sum<<endl;
}
int main( )
{
    // cout<<(100000000-1)*5<<endl;
    int t=0;
    //    cout<<"enter how many case:";
    cin>>t;
    for(int i=0 ;i<t;i++)
    how_mwny_move();
}
