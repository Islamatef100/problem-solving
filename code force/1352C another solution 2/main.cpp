//1352C - K-th Not Divisible by n
#include <iostream>
      #include <algorithm>
      using namespace std;
      void K_th_Not_Divisible_by_n(){
      int n,k,x=0,y=0;
      //  cout<<"enter n and k\n";
      cin>>n>>k;
      x=n-1;
      for(int i=1;i<=k;i++)
      {
      if(y%n==0)
      { i--; y++;}
      else
      y++;
      }
      cout<<y-1<<endl;
      }
      int main( )
      {
      int t=0;
      //  cout<<"enter t:";
      cin>>t;
      while(t--)
      K_th_Not_Divisible_by_n();
      }
      
