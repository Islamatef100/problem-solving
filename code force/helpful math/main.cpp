#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string x,s="1+3+2+5+7+6+5+4";
    for(int i=0;i<s.length();i+=2)
    {
        for(int l=0;l<s.length();l+=2)
        {
           if(s.at(i)<s.at(l))
           {
               swap(s.at(i),s.at(l));
           }
        }
    }
    cout<<s<<endl;
}
