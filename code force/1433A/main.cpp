//1433A - Boring Apartments
#include <iostream>
#include <cmath>//for function pow.
using namespace std;
int how_many_digit( )
{
    int x,y,q=0;
    // cout<<"enter  the number x:";
    cin>>x;
    for(int i=1;i<=9;i++)       // two for loap to move step by steb from 1 to 2 to 3 ect.
    {
        y=i;
        for(int t=1;t<=4;t++)
        {
            q+=t;
            if(y==x)
                return q;
            y+=(pow(10,t)*i);//to make first  1   11   111   1111
            // second       2   22   222   2222  and so....
        }
    }
    return 1;
}
int main()
{
    int t;
    //  cout<<"enter t:";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<how_many_digit( )<<endl;
    }
    }
