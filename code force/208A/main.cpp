//208A - Dubstep

#include<iostream>
using namespace std;
int main( )
{
    string x;
    cout<<"enter mixed strong:\n";
    cin>>x;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='W'&& x[i+1]=='U'&&x[i+2]=='B')
        {
            i=i+2;
            cout<<" ";
        }
        else
            cout<<x[i];
    }
    cout<<"\n";
}
