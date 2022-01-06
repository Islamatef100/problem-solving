//kefa and first steps
 #include<iostream>
 using namespace std;
 int main()
 {
 int n=0,x[10],y[10]={0,0,0,0,0,0,0,0,0,0},k=0,l=0;
 cout<<"how many days:";cin>>n;
 for(int i=0;i<n;i++)
 {
 if(i==0)
 {
 cout<<"enter mony of day("<<i+1<<")";cin>>x[i];
 ++y[k];
 }
 else
 {
 if(x[i]>=x[i-1])
 ++y[k];
 else
 {
 ++k;
 ++y[k];
 }
 }
 }
 for(int i=0;i<10;i++)
 {
 if(y[i]>y[i+1])
 l=y[i];
 else
 l=y[i+1];
 }
 
 cout<<" the length of the maximum non-decreasing:"<<l<<endl;
 }
 
 
