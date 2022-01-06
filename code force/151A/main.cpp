// 151A - Soft Drinking
#include<iostream>
#include<algorithm>
using namespace std;
int min(int x,int y,int z)
{
    if(x<=y&&x<=z)
        return x;
    else if(y<=x&&y<=z)
        return y;
    else if(z<=x&&z<=y)
        return z;
    return 0;
}
int main()
{
    int n,k,l,c,d,p,nl,np,x=0,y=0,z=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=(k*l)/nl;
    y=c*d;
    z=p/np;
    cout<<min(x,y,z)/n<<endl;
}
