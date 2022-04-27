//  266A
//  Created by Mac on 4/27/22.
#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int n=0,x=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            x++;
    }
    cout<<x<<endl;
}
