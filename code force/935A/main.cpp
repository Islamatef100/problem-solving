//935A - Fafa and his Company
   #include <iostream>
      #include <algorithm>
      using namespace std;
      int main( )
      {
      int n,x=0;
      cin>>n;
      for(int i=1;i<n;i++)
      {if(n%i==0)
      x++;
      }
      cout<<x<<endl;
      }
