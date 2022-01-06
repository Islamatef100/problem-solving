//141A - Amusing Joke .


#include <iostream>
using namespace std;
int main()
{
    int t=0,j=0;
    cout<<"enter x,y,z:\n";
    string x,y,z;
    cin>>x>>y>>z;
    //cout<<x.size()<<endl<<x[0]<<endl;
    for(int i=0;i<x.size();i++)
    {
        for(int l=0;l<z.size();l++)
        {
            if(x[i]==z[l])
            {  t++;
                z[l]='.';
                break;
                // continue;
                //cout<<z[l]<<endl;}
            }
            
        }
    }
    cout<<z<<endl;
    // if(t<x.size())
    // {   cout<<"NO\n";t=0;}
    //else
    //{
    for(int i=0;i<y.size();i++)
    {
        for(int l=0;l<z.size();l++)
        {
            if(y[i]==z[l])
            {   j++;
                z[l]='.';
                break;
            }
        }
    }
    cout<<z<<endl;
    //   if(t<y.size())
    // {
    //   cout<<"NO\n";
    // t=0;
    
    //}
    //else
    //{
    //  cout<<"YES\n";t=0;
    
    //}
    //}
    if(j>=y.size()&&t>=x.size()&&t+j==z.size())
        cout<<"YES\n";
    else
        cout<<"NO\n";
    cout<<t<<"  "<<j<<endl;
}
