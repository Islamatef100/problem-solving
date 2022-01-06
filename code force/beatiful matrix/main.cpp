#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x,y,k=0;
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter elements of row "<<i+1<<endl;
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
        
    }
    cout<<"the number 1 in row "<<x<<" and collom "<<y<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    for(int i=1;i<=3;i++)
    {
        if(x<3)
        {
            ++x;
            ++k;
        }
      else
          if(x>3)
        {
            --x;
            ++k;
        }
        else
            if(x==3)
        {
            break;
        }
        if(y<3)
        {
            ++y;
            ++k;
        }
      else  if(y>3)
        {
            --y;
            ++k;
        }
        else
            if(y==3)
        {
            break;
        }
        
    }
    cout<<"number operation is "<<k<<endl;
    
   /* for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    */
}

