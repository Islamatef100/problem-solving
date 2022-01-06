//1296A - Array with Odd Sum
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,sum=0,even=0,odd=0;
        //  cout<<"enter t:";
        cin>>t;
        auto a=new int[t];
        for(int i=0;i<t;i++)
        {
            cin>>a[i];sum+=a[i];
            if(a[i]%2!=0)
                odd++;
            else
                even++;
        }
        if(sum%2!=0)                      //ok
            cout<<"YES\n";
        else if(odd&&even)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO"<<endl;
        sum=0;
    }
}
