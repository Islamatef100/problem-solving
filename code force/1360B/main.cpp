//1360B Honest Coach

#include <iostream>
#include <vector>
using namespace std;
void B_Honest_Coach( )// name of question on code force
{
    int n,min=0,x=0;
    //  cout<<"enter how many athelets:";
    cin>>n;
    // int *k=new int[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    //   auto it=v.begin();
    for(int i=0;i<n-1;i++)
    {
        if(i==0)
            min=(v[i+1]-v[i]);
        else{
            if((v[i+1]-v[i])<=min)
                min=(v[i+1]-v[i]);}
        // cout<<"min="<<min<<endl;
    }
    cout<<min<<endl;
}
int main( )
{
    int t;
    // cout<<"enter how many case:";
    cin>>t;
    for(int i=0;i<t;i++)
    B_Honest_Coach();
}
