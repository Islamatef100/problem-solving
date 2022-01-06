//translat

 #include <iostream>
 #include <string.h>
 using namespace std;
 int main()
 {
 string z,x;
 cout<<"enter first word:";cin>>z;
 cout<<"enter second word:";cin>>x;
 if(x.length()==z.length())
 {
 int y;
 y=x.length();
 for(int i=0;i<x.length()/2;i++)
 {
 swap(x[i],x[y-1]);
 --y;
 }
 if(z==x)
 cout<<"ok\n";
 else
 cout<<"no\n";
 }
 else
 cout<<"no"<<endl;
 }
 
 
 
