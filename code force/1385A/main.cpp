// 1385A - Three Pairwise Maximums
#include<iostream>
using namespace std;
int main()
{
    int t,x,y,z,a,b,c;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x > y)swap(x,y);
        if(x > z)swap(x,z);
        if(y > z)swap(y,z);
        b=a=x;//2
        c=y;//3
        if(max(a,b)!=x||max(a,c)!=y||max(b,c)!=z)
            cout<<"NO\n";
        else
        { cout<<"YES\n";cout<<a<<" "<<b<<" "<<c<<endl;}
    }
    
    return 0;
}
