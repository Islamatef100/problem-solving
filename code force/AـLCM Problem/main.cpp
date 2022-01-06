//1389A - LCM Problem
//  AـLCM Problem
//  Created by Mac on 10/14/21.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        //&&(z>l&&z<r)
        int x,y;
        cin>>x>>y;
        int l,r,z;
        l=x;
        r=x*2;
        if((l>=x&&l<=y)&&(r>=x&&r<=y))
            cout<<l<<" "<<r<<endl;
        else
            cout<<"-1 -1\n";
    }
}
