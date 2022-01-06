// 1335B - Construct the String
#include<iostream>
using namespace std;
int main()
{
    int t;
    int n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        char c[]="abcpqrstuvwxydefghijklmnoz";
        string s;
        for(int i=0; i<b; i++){
            s[i]=c[i];
        }
        int k=0;
        cout<<endl;
        while(n--){
            cout<<s[k];
            k++;
            if(k==b)
                k=0;
        }
        cout<<endl;
    }
    return 0;
}
