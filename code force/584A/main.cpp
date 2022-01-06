//584A - Olesya and Rodion
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if((t>=10&&n==1)||n==0)
        cout<<"-1\n";
    else if(n>=2&&t>=10)
    {
        for(int i=1;i<n;i++)
        {
            cout<<"1";
        }
        cout<<t%10<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<t;
        }
        cout<<endl;
    }
}
