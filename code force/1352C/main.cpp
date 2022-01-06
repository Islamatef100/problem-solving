//1352C - K-th Not Divisible by n
#include <iostream>
#include <algorithm>
using namespace std;
void K_th_Not_Divisible_by_n(){
    int n,k;
    //  cout<<"enter n and k\n";
    cin>>n>>k;
    int x=k/(n-1);
    int y=k%(n-1);
    int z=n*x+y;
    if(y==0)
        --z;
    cout<<z<<endl;
}
int main( )
{
    int t=0;
    //  cout<<"enter t:";
    cin>>t;
    while(t--)
        K_th_Not_Divisible_by_n();
}
