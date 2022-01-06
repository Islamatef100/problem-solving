//1283A - Minutes Before the New Year
#include <iostream>
#include <cmath>
using namespace std;
int newyear()
{
    int h=0,m=0;
    // cout<<"enter hour and minutes:";
    cin>>h>>m;
    h=23-h;//23 not 24 becoude my borders are 23 houres and 60 minutes
    m=60-m;
    return(h*60)+m;
}
int main()
{
    int t;
    //  cout<<"enter t:";
    cin>>t;
    while(t--)
    {
        cout<<newyear()<<endl;
    }
}
