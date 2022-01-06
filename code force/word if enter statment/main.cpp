//word if enter statment
 #include <iostream>
 #include <string.h>
 using namespace std;
 int main()
 {
 string x;
 int l=0,k=0;
 cout<<"enter the word:";getline(cin,x);
 //  cout<<x<<endl;
 //  cout<<char(32);
 for(int i=0;i<x.length();i++)
 {
 //  cout<<x[i];
 if(x[i]>96&&x[i]<=127)
 ++l;
 else if(x[i]>64&&x[i]<=96)
 ++k;
 }
 // cout<<endl;
 for(int i=0;i<x.length();i++)
 {
 if(k>l)
 {
 if(x[i]>64&&x[i]<=96)
 cout<<x[i];
 else
 if(x[i]==32)
 cout<<char(32);
 else
 cout<<char(x[i]-32);
 }
 else if(k<=l)
 {
 if(x[i]>96&&x[i]<=127)
 cout<<x[i];
 else
 {
 if(x[i]==32)
 cout<<char(32);
 else
 cout<<char(x[i]+32);
 }
 }
 }
 cout<<endl;
 }
 
 
 
