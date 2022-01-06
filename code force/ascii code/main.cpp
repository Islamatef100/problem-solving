//ascii code

 
 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 string x;
 cout<<"enter  word\n";
 cin>>x;
 for(int i=0;i<x.length();i++)
 {
 if((int)x.at(i)>=97&&(int)x.at(i)<=127)
 {
 if(x.at(i)=='a'||x.at(i)=='o'||x.at(i)=='i'||x.at(i)=='e'||x.at(i)=='u'||x.at(i)=='y')
 continue;
 else
 cout<<"."<<(char)x.at(i);
 
 }
 
 else
 {
 if(x.at(i)=='A'||x.at(i)=='O'||x.at(i)=='I'||x.at(i)=='E'||x.at(i)=='U'||x.at(i)=='Y')
 continue;
 else
 {
 x.at(i)+=32;
 cout<<"."<<((char)x.at(i));
 }
 }
 }
 cout<<endl
 }
 

