//519B - A and B and Compilation Errors
#include <iostream>
      #include <algorithm>
      using namespace std;
      void compilition_error( )
      {
      int first=0,second=0,t=0;
      cin>>t;
      int *k=new int[t];
      int *kk=new int[t-1];
      int *kkk=new int[t-2];
      for(int i=0;i<t;i++)
      cin>>k[i];
      for(int i=0;i<t-1;i++)
      cin>>kk[i];
      for(int i=0;i<t-2;i++)
      cin>>kkk[i];
      sort(k,k+t);
      sort(kk,kk+(t-1));
      sort(kkk,kkk+(t-2));
      for(int i=0;i<t;i++)
      {
      if(k[i]!=kk[i])
      { first=k[i];break;}
      }
      for(int i=0;i<t-1;i++)
      {
      if(kk[i]!=kkk[i])
      { second=kk[i];break;}
      }
      cout<<first<<endl<<second<<endl;
      
      }
      int main( )
      {
      compilition_error( );
      }
      
