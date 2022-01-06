//1462A - Favorite Sequence
#include <iostream>
      #include <stack>
      using namespace std;
      int main( )
      {
      int t;
      cin>>t;
      while(t--){
      stack<int>s;
      int n;
      cin>>n;
      auto k=new int[n/n];
      for(int i=0;i<n/2;i++)
      cin>>k[i];
      for(int i=n/2;i<n;i++)
      {
      cin>>k[i];
      s.push(k[i]);
      }
      for(int i=0;i<n/2;i++)
      {  cout<<k[i]<<" "<<s.top()<<" ";
      s.pop();}
      if(!s.empty())
      cout<<s.top();
      cout<<endl;
      
      }
      // 1    2    3    4    5   6    7
      // 1    7    2    6    3   5    4
      }
