//1512A - Spy Detected!
#include<iostream>
using namespace std;
int what_index( )
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1]&&a[i]==a[i+1])
            return 1;
        else if(a[i]!=a[i-1]&&a[i]!=a[i+1])
            return i+1;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    cout<<what_index( )<<endl;;
}

