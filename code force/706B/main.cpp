//706B - Interesting drink


#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n=0,q=0,count=0;
    //cout<<"entre n:";
    cin>>n;
    int *xi=new int[n];
    for(int i=0;i<n;i++)
    cin>>xi[i];
    sort(xi,xi+n);
    //  cout<<"enter q:";
    cin>>q;
    int *mi=new int[q];
    for(int i=0;i<q;i++)
    {  cin>>mi[i];
        for(int t=0;t<n;t++){
            if(mi[i]>=xi[t])
                count++;
            else
                break;
        }
        cout<<count<<endl;
        count=0;
    }
}
