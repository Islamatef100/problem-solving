// 707A - Brain's Photos
#include <iostream>
using namespace std;
int main( )
{
    bool color=false;
    int n,m,t=0;
    cin>>n>>m;
    auto k=new char[n*m];
    for(int i=0;i<n;i++)
    {
        for(;t<m*n;t++)
        {
            cin>>k[t];
            //    cout<<"\ni= "<<i<<" "<<"t="<<t<<" "<<"k[t]= "<<k[t]<<endl;
            if(k[t]!='W'&&k[t]!='B'&&k[t]!='G')
            {
                //      cout<<"n= "<<n<<" "<<"m="<<m<<" "<<"k[t]= "<<k[t]<<endl;
                color=true;break;}
        }
        if(color)break;
    }
    if(color)
        cout<<"#Color\n";
    else
        cout<<"#Black&White\n";
}

