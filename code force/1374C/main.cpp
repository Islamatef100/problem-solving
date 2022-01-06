//1374C - Move Brackets
#include <iostream>
#include <stack>
using namespace std;
int movebrackets()
{
    stack<char>s;
    int x=0,n=0;
    cin>>n;
    auto k=new char[n+1];
    cin>>k;
    k[n]='0';
    for(int i=0;i<n;i++)
    {//            () ) () () (                     //   )
        char c=k[i];
        if(!s.empty())
        {
            
            if(s.top()==')'&&c=='('&&k[i+1]!=')')
            {
                x++;
                s.pop();
            }
            else if(s.top()=='('&&c==')')
                s.pop();
            else
            {
                s.push(c);
            }
        }
        else
            s.push(c);
    }
    return x;
}
int main( )
{
    int t;
    cin>>t;
    while(t--)
        cout<<movebrackets()<<endl;
}
