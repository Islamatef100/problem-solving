//  A_C+=
//  Created by Mac on 12/9/21.
#include <iostream>
using namespace std;
int main()
{
    int a,b,n,t,x=0;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        x=0;
        while(a<n&&b<n)
        {
            if(a<b)
                a+=b;
            else
            {
                b+=a;
            }
            // i did if and else becouse the question need the smale number of operation.
            x++;
        }
        if(a==n||b==n)
            x++;
        cout<<x<<endl;
    }
}
