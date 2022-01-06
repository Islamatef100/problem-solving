//1520A Do Not Be Distracted!

#include <iostream>
#include <string>
using namespace std;
string suspiciouse(string x )
{
    int z=x.length();
    for(int i=1;i<z;i++)
    {
        if(x[i]==x[i-1])
            continue;
        else
        {
            for(int t=i-1;t>=0;t--)
            {
                if(x[i]==x[t])
                    return"NO";
            }
        }
    }
    return"YES";
}
int main()
{
    int t,n;
    string x;
    //   cout<<"enter T case:";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //      cout<<"enter N day:";
        cin>>n;
        //      cout<<"enter the statment:";
        cin>>x;
        cout<<suspiciouse(x)<<endl;
    }
}
