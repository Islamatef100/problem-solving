//  34B - Sale
//codeforce.
//  B_Sale
//  Created by Mac on 10/13/21.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,sum=0,y=0;
    cin>>n>>m;
    int*k=new int[n];
    for(int i=0;i<n;i++)
    cin>>k[i];
    sort(k,k+n);
    for(int i=0;i<n;i++)
    {
        if(y>=m)
            break;
        if(k[i]<0)
        { sum+=k[i];y++;}
        
    }
    if(sum<0)
        cout<<(-sum)<<endl;
    else
        cout<<(sum)<<endl;
}
