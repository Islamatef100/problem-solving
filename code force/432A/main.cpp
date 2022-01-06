//432A Choosing Teams

#include <iostream>
#include<utility>
//#include<unordered_set>
using namespace std;
int main()
{
    
    pair<int,int>p;
    int x=0;
    cout<<"enter two number:\n";
    cin>>p.first>>p.second;
    int*k=new int[p.first];
    for(int i=0;i<p.first;i++)
    { cin>>k[i];
        if((5-k[i]>=p.second))
            x++;
        //   cout<<x<<endl;
    }
    //cout<<x<<endl;
    int x2=x/3;
    cout<<x2<<endl;
}
