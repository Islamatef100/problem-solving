//758A Holiday Of Equalit

#include <iostream>
#include<utility>
//#include<unordered_set>
using namespace std;
int main()
{
    int n,max=0,min=0;
    cout<<"enter number of citizens:";
    cin>>n;
    int*k=new int[n];
    for( int i=0;i<n;i++)
    {
        cin>>k[i];
        if(k[i]>max)
            max=k[i];
    }
    for( int i=0;i<n;i++)
    {
        min+=(max-k[i]);
    }
    cout<<min<<endl;
}
