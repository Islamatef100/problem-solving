//horesesoe on the other hoof

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 int k=0;
 string x[5],j;
 for(int i=0;i<5;i++)
 {
 cout<<"enter color "<<i+1<<endl;
 cin>>x[i];
 }
 for(int i=0;i<5;i++)
 {
 if(x[i]==j)
 continue;
 for(int l=i+1;l<5;l++)
 {
 if(x[i]==x[l])
 {
 ++k;
 j=x[l];
 }
 }
 }
 cout<<"u need "<<k<<" colors\n";
 }
