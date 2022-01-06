// 1472B-B. Fair Division
#include <iostream>
#include <algorithm>
using namespace std;
void black_squire_helper()
{
    int n,sum=0,sum2=0;
    cin>>n;
    double *k=new double[n];
    for(int i=1;i<=n;i++)
    {
        cin>>k[i];
        sum+=k[i];
        if(i<=n/2)
            sum2+=k[i];
    }
    //  cout<<"sum2="<<sum2<<endl;
    if(sum%2==0&&sum/2==sum2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        black_squire_helper();
    }
}

