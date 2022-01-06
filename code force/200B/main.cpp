//B. Drinks 200B

#include <iostream>
using namespace std;

int main()
{
    int n;
    float x[100],k=0;
    cout<<"how many juse:";
    cin>>n;
    if(n<101&&n>0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"entet percent:";
            cin>>x[i];
            k+=x[i];
        }
        cout<<"the percent of orange is :"<<(k/(n*100))*100<<endl;
    }
}




