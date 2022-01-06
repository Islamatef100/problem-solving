//228A  arrival of the general

#include<iostream>
using namespace std;
int main( )
{
    int max=0,min=100,countmax=0,countmin=0;
    int n;
    int arr[100];
    cout<<"enter soliders numbers:";
    cin>>n;
    if(n<=100)
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<101)
            {
                if(arr[i]>=max)
                {  max=arr[i];countmax=i+1;}
                if(arr[i]<=min)
                {   min=arr[i];countmin=i+1;}
            }
        }
        cout<<countmax<<endl<<countmin<<endl;
        if(countmax<countmin)
        { cout<<"number of seconds is:"<<((n-countmin)+(countmax-1))<<endl;}
        else if(countmax>countmin)
        { cout<<"number of seconds is:"<<((n-(countmin+1))+(countmax-1))<<endl;}
    }
    else
        cout<<"ur number not allowed:\n";
}
