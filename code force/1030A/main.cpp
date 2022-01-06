//1030A - In Search of an Easy Problem

include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h;
        if(i==n-1&&h==0)
            cout<<"easy\n";
        if(h==1)
        {
            cout<<"HARD\n";
            break;
        }
    }
    return 0;
}

