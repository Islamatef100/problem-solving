//1367B - Even Array


#include <iostream>
using namespace std;
void how_mny_move( )
{
    int z=0,x=0,y=0;;
    int n=0;
    //  cout<<"enter n:";
    cin>>n;
    int*k=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    for(int i=0;i<n;i++)
    {
        if( k[i]%2!=z)
        {
            for(int t=i+1;t<n;t++)
            {
                
                if(k[t]%2!=k[i])
                {
                    x=k[i];
                    k[i]=k[t];
                    k[t]=x;
                    i++;
                    y++;
                    break;
                }
            }
        }
        else
        {
            z+=1;
            z=z%2;
        }
    }
    if(n==1&&k[0]%2==1)
        cout<<y-1<<endl;
    else
        cout<<y<<endl;;
}
int main( )
{
    int t;
    // cout<<"enter t:";
    cin>>t;
    for(int i=0;i<t;i++)
    how_mny_move( );
}
