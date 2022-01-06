//soldires and bnana

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 cout<<"enter k n w\n";
 int k,n,w,p=0;
 cin>>k>>n>>w;
 for(int i=1;i<=w;i++)
 {
 p+=(i*k);
 }
 cout<<"price is "<<p<<endl;
 if(p>n)
 cout<<"he has to borrow "<<p-n<<endl;
 else
 cout<<"he dont need to borrow money;";
 }
 
 
