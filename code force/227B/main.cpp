//  227B
//  Created by Mac on 3/17/22.
#include <iostream>
using namespace std;
int main()
{
    int n=0,m=0,x=0,y=0;
    cin>>n;
    int *data_of_array=new int[n];
    for(int i=0;i<n;i++)
        cin>>data_of_array[i];
    cin>>m;
    int *data_of_query=new int[m];
    for(int i=0;i<m;i++)
        cin>>data_of_query[i];
    for(int i=0;i<m;i++)
    {
        for (int t=0;t<n;t++)
        {
            if(data_of_query[i]==data_of_array[t])
            {++x;;break;}
            ++x;
        }
        for (int t=n-1;t>=0;t--)
        {
            if(data_of_query[i]==data_of_array[t])
            {++y;;break;}
            ++y;
               
        }
    }
    cout<<endl;
    cout<<x<<" "<<y<<endl;
}
