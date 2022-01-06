//456A - Laptops
#include <iostream>
 #include <utility>
 #include <cmath>
 using namespace std;
 bool laptop()
 {
 int n,pri=0,qual=0;
 cin>>n;
 auto price=new int[n];
 auto quality=new int[n];
 cin>>price[0]>>quality[0];
 pri=price[0];qual=quality[0];
 for(int i=1;i<n;i++)
 {
 cin>>price[i]>>quality[i];
 }
 for(int i=0;i<n-1;i++)
 {
 if((price[i]<price[i+1])&&(quality[i]>quality[i+1])||(price[i]>price[i+1])&&(quality[i]<quality[i+1]))
 return  true;
 }
 if((pri<price[n-1]&&qual>quality[n-1])||(pri>price[n-1]&&qual<quality[n-1]))
 return true;
 return false;
 }
 int main()
 {
 if(laptop())
 cout<<"Happy Alex\n";
 else
 cout<<"Poor Alex\n";
 
 }
