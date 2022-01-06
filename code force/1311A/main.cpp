// 1311A - Add Odd or Subtract Even
#include <iostream>
using namespace std;
void min_number(int a,int b)
{
    int x=a-b;
    if(x==0)
        cout<<"0\n";
    else if(x>0)
    {
        if(x%2==0)
            cout<<"1\n";
        else
        {
            cout<<"2\n";
        }
    }
    else
    {
        if(x%2!=0)
            cout<<"1\n";
        else
            cout<<"2\n";
    }
}
int main( )
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        min_number(a,b);
    }
}
