//word capitalization
 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 string x="aHMed";
 cin>>x;
 if(x.at(0)>64&&x.at(0)<97)
 {cout<<x<<endl;}
 else
 {x.at(0)-=32;cout<<x<<endl;}
 
 }
