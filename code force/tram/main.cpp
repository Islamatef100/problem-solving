//tram

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 int n,z,x,sum=0,h=0;
 cout<<"enter n of stops:";cin>>n;
 for(int i=0;i<n;i++)
 {
 if(i==0||i==n-1)
 cout<<"no passenger\n";
 cout<<"stop"<<i+1<<endl;
 cin>>z>>x;
 sum=sum-z+x;
 if(sum>=h)
 h=sum;
 if((x-z)>=sum)
 sum=x-z;
 
 }
 cout<<h<<endl;
 }
 

