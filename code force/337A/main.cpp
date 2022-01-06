// 337A - Puzzles

#include <iostream>
using namespace std;

int main()
{
    int n,s;
    float x[100],k=0;
    cout<<"how many student:";
    cin>>s;
    cout<<"how many puzle:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"entetnumbre of puzle:";
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
    // from 17 to 28 i can write sort(x,x+n);
    int least = x[s-1] - x[0];
    for (int i = 1; i <= n - n; ++i)
    {
        if (x[i+s-1] - x[i] < least)
        {
            least = x[i+s-1] - x[i];
        }
    }
    cout << least << endl;
}

