// B. Chocolate
//  617B
//  Created by Mac on 2/2/22.
//created by islam atef nagy
#include <iostream>
using namespace std;
int main()
{
    int n,ifzero=1,x=0;
    cin>>n;
    long long ans=1;
    bool ok=false;
    while(n--)
    {
        cin>>x;
        if(x==1)
            {
                ans*=ifzero;
                ifzero=1;
                ok=1;
            }
        else
            {
                if(ok)
                   ifzero++;
            }
    }
    if(!ok)
        cout<<"0\n";
    else
        cout<<ans<<endl;
}
