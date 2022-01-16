//  415B
//  Created by Mac on 1/16/22.
#include <iostream>
using namespace std;
int main()
{
    long n,a,b,w;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        cout<<(((w*a)%b)/a)
              <<" ";
    }
    cout<<endl;
}
