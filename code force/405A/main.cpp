//405A - Gravity Flip
#include <iostream>
using namespace std;

int main()
{
    int n;
    float x[100],k=0;
    cout<<"how many colums:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"entetnumbre of cubes:";
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int l=0;l<n-1;l++)
        {
            if(x[l]>x[l+1])
            {
                k=x[l+1];
                x[l+1]=x[l];
                x[l]=k;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}





