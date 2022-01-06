//520 pangram

//
// this is not completly solution
#include<iostream>
#include<string>
using namespace std;
#define RED
int main( )
{
    int n=0,t=0;
    cin>>n;
    char arr[100];
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        //  cin>>arr[i];
        if(int(arr[i])>64&&int(arr[i]<96))
            t++;
    }
    /* if(n==26)
     cout<<"YES\n";
     else if(t==0)
     cout<<"NO\n";
     else
     cout<<"YES\n";
     */
    
