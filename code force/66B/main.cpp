//B. Petya and Countryside
//  main.cpp
//  66B
//  Created by Mac on 2/22/22.
#include <iostream>
using namespace std;
int main()
{
    int n=0,x=0,max=1;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
       cin>>p[i];
    for(int i=0;i<n;i++)
    {
        if(p[i]>=p[x])
            x=i;
    }
    for(int i=x;i<n-1;i++)
    {
        if(p[i]>=p[i+1])
            max++;
    }
    for(int i=x;i>0;i--)
    {
        if(p[i]>=p[i-1])
            max++;
        else
            break;
           
    }
    cout<<max<<endl;
}
