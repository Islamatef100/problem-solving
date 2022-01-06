 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 cout<<"not that muximum of number is 5\n";
 int k=0,l=0,x[5][3];
 cout<<"enter number of forces\n";
 cin>>l;
 if(l<2)
 {cout<<"no\n";return 0;}
 for(int i=0;i<l;i++)
 {
 cout<<"enter coordinate (x,y,z)\n"<<endl;
 for(int t=0;t<3;t++)
 {
 cin>>x[i][t];
 }
 }
 
 for(int t=0;t<3;t++)
 {
 int s=0;
 for(int i=0;i<l;i++)
 {
 s+=x[i][t];
 }
 if(s==0)
 ++k;
 }
 
 if(k==3)
 cout<<"yes\n";
 else
 cout<<"no\n";
 return 0;
 
 }

