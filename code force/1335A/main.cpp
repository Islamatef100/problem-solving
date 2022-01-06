//1335A - Candies and Two Sisters

//   ther are two solution
#include<iostream>
#include<string>
using namespace std;
#define RED
int main( )
{
    int n;
    cout<<"entre test number:";
    cin>>n;
    int arr[100],arr2[100],y=0,k=0;
    for(int i=0;i<n;i++)
    {
        cout<<"entre the number of candies:";
        cin>>arr[i];
        if(arr[i]!=0)
        {
            for(int t=arr[i];t>=0;t--)
            {
                
                if(t+y==arr[i])
                {
                    if(t>y&&t!=0&&y!=0)
                        k++;
                }
                y++;
            }
        }
        
        arr2[i]=k;
        k=0;y=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<endl;
    }
    
}

