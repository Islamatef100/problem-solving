//1409A - Yet Another Two Integers Problem

#include<bits/stdc++.h>

using namespace std;

int main()

{
    
    int t, a,b,mx,mn;
    
    
    cin>>t;
    
    while(t--)
        
    {
        
        cin>>a>>b;
        
        if(a==b)
            
            cout<<"0"<<endl;
        
        else
            
        {
            
            if(abs(a-b)%10==0)
                
                cout<<abs(a-b)/10<<endl;
            
            else
                
                cout<<(abs(a-b)/10)+1<<endl;
            
        }
        
    }
    
}
