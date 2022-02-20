//B. Fox Dividing Cheese
//  371B
//  Created by Mac on 2/20/22.
// solution for this problem but not the minimize methods.
#include <iostream>
using namespace std;
int to_make_equal(int &y)
{
    if(y%5==0)
    {
        y=y/5;
    }
    else if(y%3==0)
    {
        y=y/3;
    }
   else if(y%2==0)
    {
        y=y/2;
    }
    else
        y=-1;
    return y;
}
int main()
{
    int x=0,y=0,counter=0;//x and y is two spaces.
    cin>>x>>y;
    while(x!=y)
    {
        if(x<0||y<0)
        {   counter=-1;break;}
       if(x>y)
              x=to_make_equal(x);
       else
           y=to_make_equal(y);
        counter++;
    }
    cout<<counter<<endl;
}
