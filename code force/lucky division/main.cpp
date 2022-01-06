//lucky division

 #include <iostream>
 #include <string.h>
 using namespace std;
 int main()
 {
 string x;
 int i,l=0;
 cout<<"enter the number:";cin>>x;
 for(i=0;i<x.length();i++)
 {
 if(x[i]!='4' && x[i]!='7')
 {
 cout<<"no\n";++l;break;
 
 }
 }
 if(l==0)
 cout<<"yes\n";
 
 }
 
 
