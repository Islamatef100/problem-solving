//B. Queue at the School

 #include <iostream>
 #include <string.h>
 using namespace std;
 int main()
 {
 string x;
 int n=0,t=0;
 cout<<"enter number of queue:";cin>>n;
 cout<<"enter time of one operatio:";cin>>t;
 cout<<"enter the queue:";cin>>x;
 cout<<x.length()<<endl;
 if(x.length()==n)
 {
 for(int i=0;i<t;i++)
 {
 for(int i=0;i<n;i++)
 {
 if(x[i]=='B'&&x[i+1]=='G')
 {swap(x[i],x[i+1]);
 i+=2;
 }
 }
 }
 cout<<x<<endl;
 }
 else
 cout<<"error==>n!=length of statment\n";
 
 }
 
 
 
