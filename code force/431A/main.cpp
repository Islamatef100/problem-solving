// 431A - Black Square
#include <iostream>
using namespace std;
int black_squire_helper(char s)
{
    if(s=='1')
        return 1;
    else if(s=='2')
        return 2;
    else  if(s=='3')
        return 3;
    else
        return 4;
}
int main()
{
    int arr[4],sum=0;
    string s;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        sum+=arr[ black_squire_helper(s[i])-1];
    }
    cout<<sum<<endl;
    
}
