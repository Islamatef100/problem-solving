//432A A. The New Year: Meeting Friends
#include <iostream>
//#include<utility>
//#include<unordered_set>
using namespace std;
int main()
{
    
    pair<int,pair<int,int>>p;
    cout<<"enter three number:\n";
    cin>>p.first>>p.second.first>>p.second.second;
    for(int i=0;i<2;i++)
    {
        if(p.first>p.second.first)
            swap(p.first,p.second.first);
        if(p.second.first>p.second.second)
            swap(p.second.first,p.second.second);
    }
    cout<<(p.second.first-p.first)+(p.second.second-p.second.first)<<endl;
}
