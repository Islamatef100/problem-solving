//
//  main.cpp
//  382A
//  Created by Mac on 2/9/22.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x,y,left="",right="";
    cin>>x>>y;
    int l=x.find('|'),str=x.length(),task=y.length(),r=str-(l+1);
    //cout<<q<<endl<<qq<<endl<<qqq<<endl;
    for(int i=0;i<l;i++)
    left+=x[i];
    for(int i=l+1;i<=str;i++)
    right+=x[i];
//    cout<<"left = "<<left<<" l= "<<l<<endl;
//    cout<<"right = "<<right<<" r= "<<r<<endl;
    for(int i=0;i<str;i++)
    {
        if(l<=r)
        {
            left+=y[i];
            l++;
            //cout<<"left = "<<left<<endl;
        }
        else
        {
            right+=y[i];
            r++;
            //cout<<"right = "<<right<<endl;
        }
    }
    cout<<(left.length()==right.length() ? left+"|"+right:"Impossible")<<endl;
}
