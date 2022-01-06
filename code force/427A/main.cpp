//427A Police Recruits

#include <iostream>
#include<stack>
using namespace std;
int main()
{
    int n,c=0,count=0,c2=0;
    cin>>n;
    int*k=new int[n];
    // cin>>k[0];
    //c=k[0];
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
        if(k[i]==-1&&c2==0)
            count++;
        else if(k[i]>0&&i==c+1)
        {  c2+=k[i];c=i;}
        else if(k[i]>0)
        {  c2=k[i];c=i;}
        else if(k[i]==-1&&c2>0)
        {  c2--;}
    }
    cout<<count<<endl;
}
