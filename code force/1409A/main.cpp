//1409A - Yet Another Two Integers Problem


#include <iostream>
using namespace std;
int more10(int x,int &count)
{
    x-=10;
    count++;
    if(x==0)
        return count;
    else if(x<=10)
    {     count++;
        x-=x;
        return count;}
    more10(x, count);
    return count;
    
}
int main()
{
    int t;
    cout<<"enter t:\n";
    cin>>t;
    long long *j=new long long[t];
    int* j2=new int[t];
    for( int i=0;i<t;i++)
    {
        cin>>j[i]>>j2[i];
    }
    for( int i=0;i<t;i++)
    {
        int count=0;
        long long x;
        x=j[i]-j2[i];
        if(x==0)
        {  cout<<"0\n";continue;}
        if(x>0)
        {
            if(x<=10)
            {
                cout<<"1\n";
                continue;
            }
            else if(x>10)
            {
                
                cout<< more10(x,count)<<endl;
            }
        }
        else if(x<0)
        {
            x=j2[i]-j[i];
            cout<< more10(x,count)<<endl;
        }
    }
}
