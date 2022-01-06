//A. Ultra-Fast Mathematician  61A
#include <iostream>
using namespace std;

int main()
{
    string x,c;;
    cout<<"enter first number:";cin>>x;
    cout<<"enter second number:";cin>>c;
    if(x.length()==c.length())
    {
        for(int i=0;i<x.length();i++)
        {
            if(x[i]==c[i])
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<endl;
    }
}
