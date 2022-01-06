//711A - Bus to Udayland
  
#include <iostream>
      #include <string>
      using namespace std;
      void  A_Bus_to_Udayland()
      {
      int n,t=0,y=0;
      int x=0;
      bool o=false,first=false;
      // cout<<"enter how many rows:";
      cin>>n;
      auto k=new char[n*5];
      for(int i=0;i<n;i++)
      {
      int z=5;
      x=0;
      while(z--)
      {
      cin>>k[t];
      if(!o)
      {
      if(k[t]=='O')
      ++x;
      else
      x=0;
      if(!o&&x>1)
      {
      o=true;
      y=i;
      }
      }
      t++;
      }
      }
      t=0;
      if(o)
      {
      cout<<"YES\n";
      for(int i=0;i<n;i++)
      {
      int z=5;
      while(z--)
      {
      if(i==y&&k[t]=='O'&&k[t+1]=='O'&&!first)
      {cout<<"++";z--;t++;first=true;}
      else
      cout<<k[t];
      t++;
      }
      cout<<endl;
      }
      }
      else
      cout<<"NO\n";
      }
      int main( )
      {
      A_Bus_to_Udayland();
      /*
      6
      OO|OX
      XO|XX
      OX|OO
      XX|OX
      OO|OO
      OO|XX
      */
}
