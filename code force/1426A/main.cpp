//1426A - Floor Number
 #include <iostream>
      #include <algorithm>
      using namespace std;
      int main( )
      {
      int n,x,y;
      cin>>n;
      while(n--)
      {
      cin>>x>>y;
      int b=x/y;
      if(x%y!=0)
      cout<<++b<<endl;
      else
      cout<<b<<endl;
      }
      }
