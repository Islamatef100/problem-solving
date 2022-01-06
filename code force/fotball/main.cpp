//fotball

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 string x="0000000";
 cout<<"nter x: ";
 cin>>x;
 int k=1;
 for(int i=0;i<(x.size());i++)
 {
 if(x[i]==x.length())
 {break;}
 if(x[i]==x[i+1])
 {
 ++k;
 if(k==7)
 {
 cout<<"\tyes\n";
 break;
 }
 }
 else
 k=0;
 }
 if(k<7)
 cout<<"\tno\n";
 
 }
