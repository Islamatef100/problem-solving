// 520B - Two Buttons
#include<iostream>
using namespace std;
int main()
{
    int n,m,x=0;
    cout<<"enter n and m:\n";
    cin>>n>>m;
    if(n>m)
        cout<<n-m<<endl;
    else if(n<m)
    {
        while(n!=m)
        {
            if(m%2==0)
            {
                m/=2;++x;
                
            }
            else
            {
                ++m;++x;
                
            }
        }
        cout<<x<<endl;
    }
    
    
