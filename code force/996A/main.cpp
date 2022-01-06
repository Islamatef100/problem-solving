//996A - Hit the Lottery

#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the money:";
    int n,i=0;
    cin>>n;
    while(n>=100)
    {
        n-=100;
        i++;
    }
    //cout<<n<<" "<<i<<endl;
    while(n>=20)
    {
        n-=20;
        i++;
    }
    //cout<<n<<" "<<i<<endl;
    while(n>=10)
    {
        n-=10;
        i++;
    }
    //cout<<n<<" "<<i<<endl;
    while(n>=5)
    {
        n-=5;
        i++;
    }
    //cout<<n<<" "<<i<<endl;
    while(n>=1)
    {
        n-=1;
        i++;
    }
    //  cout<<n<<" "<<i<<endl;
    //  if(n==0)
    cout<<i<<endl;
}
