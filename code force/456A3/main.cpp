//456A - Laptops
#include <iostream>
 #include <utility>
 #include <cmath>
 using namespace std;
 bool laptop()
 {
 int n;
 cin>>n;
 auto price=new int[n];
 auto quality=new int[n];
 for(int i=0;i<n;i++)
 {
 cin>>price[i]>>quality[i];
 }
 for(int i=0;i<(n-1);i++)
 {
 for(int t=i+1;t<n;t++)
 {
 if((price[i]<price[t])&&(quality[i]>quality[t]))
 return  true;
 }
 }
 return false;
 }
 int main()
 {
 if(laptop())
 cout<<"Happy Alex\n";
 else
 cout<<"Poor Alex\n";
 
 }
 
 
 
 
 
