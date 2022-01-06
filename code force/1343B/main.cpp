//1343B - Balanced Array

#include <iostream>
#include<string>
#include<queue>
using namespace std;
int main()
{
    int n,sum=0,sum2=0;
    cout<<"enter n:\n";cin>>n;
    int*k=new int[n];
    for(int i=0;i<n;i++ )
    cin>>k[i];
    for(int i=0;i<n;i++ )
    {
        if(k[i]%2!=0)
            cout<<"NO\n";
        else
        {
            sum=((k[i]/2)*((k[i]/2)+1));
            sum2=((k[i]/2-1)*(k[i]/2-1));
            if((sum-sum2)%2==0)
                cout<<"NO\n";
            
            else
            {
                cout<<"YES\n";
                for(int t=1;t<=k[i]/2;t++)
                {
                    cout<<t*2<<" ";
                }
                for(int t=0;t<k[i]-2;)
                {
                    //      cout<<"t="<<t<<" ";
                    cout<<(1+t)<<" ";
                    t=t+2;;
                }
                cout<<sum-sum2<<endl;
            }
        }
    }
    
}

