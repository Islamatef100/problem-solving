//
//  main.cpp
//  371B
//  Created by Mac on 2/20/22.
#include <iostream>
using namespace std;
int main()
{
    int x=0,y=0,z=0,x1=0,y1=0,z1=0,A=0,B=0;
    cin>>A>>B;
    while(A)
    {
        if(!(A%2))
        {
            x++;
            A=A/2;
        }
        else if(!(A%3))
        {
            y++;
            A=A/3;
        }
        else if(!(A%5))
        {
            z++;
            A=A/5;
        }
        else
            break;
    }
    while(B)
    {
        if(!(B%2))
        {
            x1++;
            B=B/2;
        }
        else if(!(B%3))
        {
            y1++;
            B=B/3;
        }
        else if(!(B%5))
        {
            z1++;
            B=B/5;
        }
        else
            break;
    }
    if(A!=B)
        cout<<"-1\n";
    else
         cout<<(abs((x-x1))+abs((y-y1))+abs((z-z1)))<<endl;
}
