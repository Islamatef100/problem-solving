//460A - Vasya and Socks
#include <iostream>
//#include <vector>
using  namespace std;
int main( )
{
    int n=0,m=0,sum=0,k=1;
    cout<<"enter n and m:\n";
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(k!=m)
        {
            ++k;
            ++sum;
        }
        else if(k==m)
        {
            i--;
            k=1;
            ++sum;
        }
    }
    cout<<sum<<endl;
}
