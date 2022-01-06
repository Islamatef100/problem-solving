// 630A - Again Twenty Five!
#include <iostream>
#include <cmath>//for pow()
using namespace std;

int main( )
{
    //cout<<pow(5,1000000000000000000)<<endl;
    int n;
    cin>>n;
    int x=pow(5, n);
    x%=100;
    cout<<x<<endl;
    
}
