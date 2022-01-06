//1535A - Fair Playoff
#include <iostream>
 #include <cmath>
 using namespace std;
 bool fair()
 {
 int s[4],c=0;
 cin>>s[0]>>s[1]>>s[2]>>s[3];
 int x=0,y=0;
 for(int i=1;i<4;i++)
 {
 //1
 // 44 84 46 67
 if(s[i]>s[x])
 {
 c++;
 y=x;
 x=i;
 }
 else if (s[i]>s[y])
 {
 y=i;
 }
 else if(c==0)
 {    y=i;c++;}
 
 }
 
 //  cout<<"x= "<<x<<"y= "<<y<<endl;
 if((x>1&&y<=1)||(x<=1&&y>1))
 return true;
 else
 return false;
 }
 int main()
 {
 int n;
 cin>>n;
 while(n--)
 {
 if(fair())
 cout<<"YES\n";
 else
 cout<<"NO\n";
 }
 }
 
 
