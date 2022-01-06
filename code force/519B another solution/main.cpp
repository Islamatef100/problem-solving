//519B - A and B and Compilation Errors
#include <iostream>
      using namespace std;
      void compilition_error( )
      {
      bool exist=0;
      int t;
      cin>>t;
      auto k=new int[t];
      for(int i=0;i<t;i++)
      {
      cin>>k[i];
      }
      int *kk=new int[t-1];
      for(int i=0;i<t-1;i++)
      {
      cin>>kk[i];
      }
      for(int i=0;i<t;i++)
      {
      for(int ii=0;ii<t-1;ii++)
      {
      if(k[i]==kk[ii])
      {exist=1;kk[ii]=-1;break;}
      }
      if(exist==0)
      {    cout<<k[i]<<endl;k[i]=-1;break;}
      else
      exist=0;
      }
      exist=0;
      int *kkk=new int[t-2];
      for(int i=0;i<t-2;i++)
      {
      cin>>kkk[i];
      }
      for(int i=0;i<t;i++)
      {
      if(k[i]==-1)
      continue;
      for(int ii=0;ii<t-2;ii++)
      {
      if(k[i]==kkk[ii])
      {exist=1;kkk[ii]=-1;break;}
      }
      if(exist==0)
      {    cout<<k[i]<<endl;break;}
      else
      exist=0;
      }
      }
      int main( )
      {
      compilition_error( );
      }
