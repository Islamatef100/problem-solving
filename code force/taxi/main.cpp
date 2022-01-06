
//taxi

 #include<iostream>
 using namespace std;
 int main()
 {
 int n=0,groub[10],cars=0;
 int i1=0,i2=0,i3=0,i4=0;
 cout<<"entr number of groubs:";cin>>n;
 for(int i=0;i<n;i++)
 {
 cout<<"enter number groub("<<i+1<<"):";cin>>groub[i];
 if(groub[i]==4)
 ++i4;
 else if(groub[i]==3)
 ++i3;
 else if(groub[i]==2)
 ++i2;
 else if(groub[i]==1)
 ++i1;
 
 }
 cars+=i4;
 i4=0;
 while(i3!=0 && i1!=0)
 {
 ++cars;
 --i3;--i1;
 }
 if(i3!=0)
 {cars+=i3;i3=0;}
 if(i2%2!=0)
 {
 if(i1>=2)
 {
 i1-=2;
 i2+=1;
 }
 else if(i1==1||i1==0)
 { cars+=(i2/2);
 cars+=1;}
 }
 else if(i2%2==0)
 cars+=i2/2;
 else if(i1>0)
 {
 while(i1>4)
 {
 i1-=4;
 ++cars;
 }
 cars+=i1;
 }
 cout<<"number of cars is:"<<cars<<endl;
 }
