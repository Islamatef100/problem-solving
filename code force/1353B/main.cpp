//1353B - Two Arrays And Swaps

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int get_max()
{
    vector<int> v;
    vector<int> v2;
    int n,k;
    //cout<<"enter n & k:\n";
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        v2.push_back(x);
    }
    sort(v.begin(), v.end());
    //  for(auto it:v)
    //    cout<<it<<" ";
    sort(v2.rbegin(),v2.rend());
    cout<<endl;
    //  for(auto i:v2)
    //    cout<<i<<" ";
    cout<<endl;
    int sum=0,g=0;
    for(int i=0;i<n;i++)
    {
        int j=0;
        if(g<k)
        {
            if(v[i]<v2[i])
            {
                ++g;
                j=v[i];
                v[i]=v2[i];
                v2[i]=j;
            }
        }
        sum+=v[i];
    }
    return sum;
}
int main()
{
    vector<int> v3;
    int t=0;
    // cout<<"enter t:";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        
        v3.push_back(get_max());
        
    }
    for(auto it:v3)
        cout<<it<<endl;
    
}
