//749A - Bachgold Problem

#include<iostream>
using namespace std;
int main()

{
    int n;
    //  cout<<"enter n\n";
    cin>>n;
    cout<<n/2<<endl;
    for(int i=0;i<(n/2)-1;i++)
    cout<<"2 ";
    if(n%2==1)
        cout<<"3";
    else
        cout<<"2";
    cout<<endl;
    }
