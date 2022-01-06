
//word

 #include <iostream>
 #include <string.h>
 using namespace std;
 int main()
 {
 string x;
 int l=0,k=0;
 cout<<"enter the word:";cin>>x;
 for(int i=0;i<x.length();i++)
 {
 if(x[i]>96&&x[i]<=127)
 ++l;
 else if(x[i]>64&&x[i]<=96)
 ++k;
 }
 for(int i=0;i<x.length();i++)
 {
 if(k>l)
 {
 if(x[i]>64&&x[i]<=96)
 cout<<x[i];
 else
 cout<<char(x[i]-32);
 }
 else if(k<=l)
 {
 if(x[i]>96&&x[i]<=127)
 cout<<x[i];
 else
 cout<<char(x[i]+32);
 }
 }
 cout<<endl;
 }
 

