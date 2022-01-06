//1475A - Odd Divisor .

#include<iostream>
using namespace std;
int A_Odd_Divisor()
{
    long n;
    //  cout<<"enter n:";
    cin>>n;
    while(n%2==0)
        n=n/2;
    if(n>1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
int main()
{
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    A_Odd_Divisor();
    }
