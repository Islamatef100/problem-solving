//469A A. I Wanna Be the Guy

#include<iostream>
using namespace std;
int main()
{
    
    int n,p,q,sum=0,sum2=0;//,x=0;
    cout<<"enter levels numbers:";
    cin>>n;
    while(n!=0)
    {
        sum+=n;
        --n;
    }
    int arr[100],arr2[100];//,arr3[100];
    cout<<"enter p:";
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
        sum2+=arr[i];
        //arr3[i]=arr[i];
    }
    cout<<"enter q:";
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>arr2[i];
        for(int t=0;t<p;t++)
        {
            if(arr2[i]==arr[t])
            {arr2[i]=0;//++x;
            }
        }
        sum2+=arr2[i];
    }
    cout<<sum<<endl<<sum2<<endl;
    if(sum==sum2)
        cout<<"I become the guy\n";
    else
        cout<<"Oh, my keyboard!\n";
}
