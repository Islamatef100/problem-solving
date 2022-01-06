//451A - Game With Sticks  >>important;

#include<iostream>
using namespace std;
int main()
{
    int n=0,m=0,sum=0,product=1;
    int i=1;
    cout<<"how many rows and colls:\n";cin>>n>>m;
    /* first way good but not pirfect bcousr test 16 not true when n==25 and m==70
     if(n*m==2)
     cout<<"Akshat\n";
     else if((n*m)%2==0)
     cout<<"Malvika\n";
     else
     cout<<"Akshat\n";
     
     // this way long but pirfect
     product=n*m;
     sum=(n+m)-1;
     while(product>0)
     {
     if(i==1)
     product-=(sum);
     else
     {
     
     product-=sum;
     }
     sum-=2;
     i+=1;
     
     }
     if(i%2!=0)
     cout<<"Malvika\n";
     else
     cout<<"Akshat\n";
     
     return 0;
     }
     
