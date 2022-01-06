//25A iq test

#include<iostream>
using namespace std;
int main( )
{
    int n=0,arr[100],k=0,l=0,f=0,p=0;
    cout<<"enter number n:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {k++;f=i;}
        else
        {l++;p=i;}
    }
    if(l==1)
        cout<<"sequence even and this index for odd number:"<<p+1<<endl;
    else if(k==1 )
        cout<<"sequence odd and this index for even number:"<<f+1<<endl;
    else
        cout<<"ther are more than one number different:\n";
}

