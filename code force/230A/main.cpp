//230A  A. Dragons

#include<iostream>
 using namespace std;
 int main( )
 {
 int n,s,arr[100],j=0,k=0;
 cout<<"enter s,n\n";
 cin>>s>>n;
 for(int i=0;i<n;i++)
 {
 cout<<"enter xi,yi\n";
 cin>>arr[j]>>arr[j+1];
 if(s>arr[j])
 s+=arr[j+1];
 else
 {
 for(int h=0;h<n;h++)
 {
 k++;
 //cout<<"NO\n";
 //return 0;
 }
 }
 j+=1;
 }
 if(k>0)
 {cout<<"NO\n";}
 else
 cout<<"YES\n";
 return 0;
 }
