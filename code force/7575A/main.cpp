     #include<iostream>
     using namespace std;
     int main()
     {
     int n,c,t;
     cin>>t;
     while(t--)
     {
     c=0;
     cin>>n;
     while(n%6==0)
     {
     n=n/6;
     c++;
     }
     while(n%3==0)//oh my god
     {
     n=n/3;
     c=c+2;
         //.beciuse i will *6and/2;so it 2 operation.
     }
     if(n==1)
     cout<<c<<endl;
     else
     cout<<"-1"<<endl;
     }
     }
     
