//32B - Borze
#include <iostream>
      #include <string>
      using namespace std;
      int main( )
      {
      string inpute;
      int length=0;
       cout<<"enter ur inpute:";
      cin>>inpute;
      length=inpute.length();
      for(int i=0;i<length;i++)
      {
      if(inpute[i]=='.')
      cout<<"0";
      else if(inpute[i]=='-'&&inpute[i+1]=='.')
      {
      cout<<"1";
      i++;
      }
      else
      {
      cout<<"2";
      i++;
      }
      }
      cout<<endl;
      }
