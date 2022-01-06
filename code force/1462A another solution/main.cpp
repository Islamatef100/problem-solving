//1462A - Favorite Sequence
 #include <iostream>
      #include <utility>
      #include <cmath>
      using namespace std;
      void sequence()
      {
      //  bool lift=false;
      int n;
      cin>>n;
      int *b=new int[n];
      for(int i=0;i<n;i++)
      cin>>b[i];
      for(int i=0;i<n/2;i++)
      {
      cout<<b[i]<<" "<<b[n-(i+1)]<<" ";
      }
      if(n%2==1)
      cout<<b[(n/2)]<<endl;
      }
      int main()
      {
      int t=0;
      cin>>t;
      while(t--)
      sequence();
      
      }
