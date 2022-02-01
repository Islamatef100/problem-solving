//  16B
//  Created by Mac on 2/1/2022
//created by islam atef.
#include <iostream>
#include<utility>
using namespace std;
int main()
{
    int xfirst=0,xsecond=0;// this varible for do arrangment for the element
    int n,m;//n ismax number of matchboxs ban burglre take it in his rucksak
    // m is a number of containers.
    cin>>n>>m;
    pair<int, int>*p=new pair<int, int>[m]; //to store pair of data in array
    for(int i=0;i<m;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
  //  cout<<"don\n";
    for(int i=0;i<m-1;i++)//for arrangment the element
    {
        for(int l=i+1;l<m;l++)
        {
            if(p[i].second<p[l].second)
            {
               // cout<<"done\n";
                xsecond=p[i].second;
                p[i].second=p[l].second;
                p[l].second=xsecond;
                xfirst=p[i].first;
                p[i].first=p[l].first;
                p[l].first=xfirst;
            }
                
        }
    }
  /*  for(int i=0;i<m;i++)
    {
        cout<<p[i].first<<p[i].second<<endl;
    }*/
    int rucksack=n,i=0,max=0;
    while(rucksack!=0&i<m)//to get number of matches
    {
        if( rucksack>p[i].first)
        {
            max+=((p[i].first)*(p[i].second));
            rucksack-=p[i].first;
        }
        else
        {
            max+=(rucksack*(p[i].second));//here the error.
            rucksack=0;
        }
        ++i;
    }
    cout<<max<<endl;
    
    
}
