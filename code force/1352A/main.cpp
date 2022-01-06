//1352A - Sum of Round Numbers

#include <iostream>
using namespace std;
int convert_char_to_string(char j)
{
    if(j=='1')
        return 1;
    else  if(j=='2')
        return 2;
    else  if(j=='3')
        return 3;
    else  if(j=='4')
        return 4;
    else  if(j=='5')
        return 5;
    else  if(j=='6')
        return 6;
    else  if(j=='7')
        return 7;
    else  if(j=='8')
        return 8;
    else  if(j=='9')
        return 9;
    else
        return 0;
}
int how_many_number(string x)
{
    int z=0;
    for(int i=0;i<x.length( );i++)
    {
        if(x[i]!='0')
            z++;
    }
    return z;
}
int main()
{
    int n;
    // cout<<"enter n:\n";
    cin>>n;
    string* k=new string[n];
    for(int i=0;i<n;i++)
    cin>>k[i];
    for(int i=0;i<n;i++)
    {
        int x=k[i].length();
        int r=x;
        cout<<how_many_number(k[i])<<endl;
        for( int t=0;t<x;t++)
        {
            // cout<<r<<endl;
            char y=k[i][t];
            if(convert_char_to_string(y))
                cout<<convert_char_to_string(y)* pow(10, r-1)<<" ";
            r--;
            
            
        }
        cout<<endl;
        // cout<<x<<" ";
    }
    cout<<endl;
    
}
