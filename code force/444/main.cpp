 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 string x="RRBBGG";
 int n=6,k=0;
 if(x.length()!=n)
 cout<<"error==>n nor equal collersn\n";
 for(int i=0;i<x.length();i++)
 {
 for(int j=i+1;j<x.length();j++)
 {
 if(x.at(i)==x.at(j))
 ++k;
 }
 }
 cout<<k<<endl;
 }

