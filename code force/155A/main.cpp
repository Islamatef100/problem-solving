//155A - I_love_\%username\%

#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"how many\n";
    cin>>n;
    int*k=new int[n];
    cin>>k[0];
    int max=k[0];
    int min=k[0];
    for(int i=1;i<n;i++)
    {
        cin>>k[i];
        if(k[i]>max)
        {
            max=k[i];count++;
            
        }
        if(k[i]<min)
        {
            min=k[i];count++;
            
        }
    }
    cout<<count<<endl;
}
