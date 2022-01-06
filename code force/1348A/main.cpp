//1348A - Phoenix and Balance
#include <iostream>
#include <cmath>//for function pow.
using namespace std;
int  Phoenix_Balance()
{
    int n,sum=0,x=0;
    //    cout<<"enter :N";
    cin>>n;
    n/=2;
    while(x!=n)
    {
        sum+=pow(2, x+1);
        ++x;
    }
    return sum;
}

int main() {
    int t=0;
    //   cout<<"enter T:";
    cin>>t;
    for(int i=0;i<t;i++)
    cout<<Phoenix_Balance()<<endl;
    
    return 0;
}
