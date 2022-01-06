//466A - Cheap Travel

#include <iostream>
//#include<list>
//#include<queue>
using namespace std;
int main()
{
    int x1=0,x2=0,x3=0,x4=0;
    cout<<"enter the four number:";cin>>x1>>x2>>x3>>x4;
    if(x1<x2)
    {
        if(x4<(x1*x3))
            cout<<x4;
        else
            cout<<x1*x3;
    }
    else  if(x1%x2==0)
    {
        if(((x1/x2)*x4)<(x1*x3))
            cout<<((x1/x2)*x4);
        else
            cout<<(x1*x3);
    }
    else
    {
        int y1=0,y2=0,y3=0;
        y1=x1/x2;
        y2=(y1*x4)+((x1%x2)*x3);
        y3=((y1+1)*x4);
        if(y2<y3)
            cout<<y2;
        else
            cout<<y3;
    }
}

