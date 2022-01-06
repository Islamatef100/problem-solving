//1352C - K-th Not Divisible by n
#include <iostream>
      #include <algorithm>
      using namespace std;
      //#define
      void K_th_Not_Divisible_by_n(){
      int n,k,x=0,y=1;
      // cout<<"enter n and k\n";
      cin>>n>>k;
      while(x<k)
      {
      if(y%n!=0)
      x++;
      y++;
      }
      cout<<y-1<<endl;
      }
      int main( )
      {
      int t=0;
      // cout<<"enter t:";
      cin>>t;
      while(t--)
      K_th_Not_Divisible_by_n();
      }
