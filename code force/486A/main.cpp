//A. Calculating Function 486A code force;

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    long long int n,sum=0;
    cout<<"enter n:";cin>>n;
    while(i<=n)
    {
        sum+=(i*(pow(-1,i)));
        i++;
    }
    //for( int i=1;i<=n;i++)
    // {
    //      sum+=(i*(pow(-1,i)));
    //  }
    cout<<sum<<endl;
}


