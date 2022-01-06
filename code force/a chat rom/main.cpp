//a chat rom

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 int x[4]={0,0,0,0};
 string c;
 cout<<"enter world:";cin>>c;
 for(int i=0;i<c.length();i++)
 {
 if(c[i]=='h')
 x[0]=i+1;
 else if(c[i]=='e')
 x[1]=i+1;
 else if(c[i]=='l')
 x[2]=i+1;
 else if(c[i]=='o')
 x[3]=i+1;
 }
 if(x[0]>=1&&x[1]>=1&&x[2]>=2&&x[3]>=1)
 cout<<"yeas\n";
 else
 cout<<"no\n";
 
 }
 

