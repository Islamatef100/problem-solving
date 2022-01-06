//492A - Vanya and Cubes
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i=0,x=0;
    //  cout<<"enter n:";
    cin>>n;
    while(n>(i+x))
    {
        i++;
        x=(i+x);
        n-=x;
    }
    cout<<(i)<<endl;
}
