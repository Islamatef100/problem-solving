//510A - Fox And Snake

#include <iostream>
using namespace std;
int main()
{
    cout<<"enter 2 number\n";
    int x,y,z=2,a=2;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        if(a%2==0)
        {
            for(int t=0;t<y;t++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            //cout<<endl;
            if(z%2==1)
                cout<<"#";
            for(int t=0;t<y-1;t++)
            {
                cout<<".";
            }
            if(z%2==0)
                cout<<"#";
            z++;
            cout<<endl;
        }
        a++;
    }
    
}
