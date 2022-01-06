//732 A A. Buy a Shovel

#include <iostream>
#include<algorithm>
using namespace std;
void check(int&count,int k,int r,int sum)
{
    sum=k*count;
    if(sum%10==0||sum%10==r)
        return;
    else
    {count++;check(count,k,r,sum);}
}
int main()
{
    auto k=0,r=0,count=1,sum=0;
    cout<<"enter k and r:\n";
    cin>>k>>r;
    check(count,k,r,sum);
    cout<<count<<endl;
    
    
}
