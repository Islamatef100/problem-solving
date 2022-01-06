//codeforce
//474B - Worms
//  B_worms
//  Created by Mac on 10/11/21.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0,m=0,x=0,l=0,sum=0,y=0;
    cin>>n;
    int *k=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>y;
        sum+=y;
        k[i]=sum;
    }
    cin>>m;
    while(m--)
    {
        cin>>x;
        for(l=0;l<n;l++)
        {
            if(k[l]>=x)
                break;
        }
        cout<<l+1<<endl;
    }
}
