//A. George and Accommodation

 #include<iostream>
 using namespace std;
 int main()
 {
 int n,p,q,t=0;
 cout<<"enter number of rooms:";cin>>n;
 for(int i=0;i<n;i++)
 {
 cout<<"how many people in room number:"<<i+1<<":";cin>>p;
 cout<<"how many people can stay in this room:";cin>>q;
 if(p+2<=q)
 ++t;
 }
 cout<<"there are "<<t<<" empty room\n";
 }
 
