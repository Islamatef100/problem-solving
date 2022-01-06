//mgnates

 #include<iostream>
 using namespace std;
 int main()
 {
 int n,x[100],groubs=0;
 cout<<"enter magnets numbers::";cin>>n;
 for(int i=0;i<n;i++)
 {
 if(i==0)
 {cout<<"enter magnet:";cin>>x[i];++groubs;}
 else if(i>0)
 {
 cout<<"enter magnet:";cin>>x[i];
 if(x[i]==x[i-1])
 continue;
 else
 ++groubs;
 
 }
 
 }
 cout<<"ther are:"<<groubs<<endl;
 }
 
