//  567A
//A. Lineland Mail
//  Created by Mac on 2/3/22.
#include <iostream>
using namespace std;
int get_positive_number(int x)
{
    if(x>=0)
        return x;
    else
        return -x;
}
int main()
{
    int min=0,min2=0,max=0,max2=0;
    int n=0;
    cin>>n;//n is number of the cities
    int *p=new int[n];
    for(int i=0;i<n;i++)//array must be ordered
    {
        cin>>p[i];
    }
    if((p[0]<0&&p[1]<0)||(p[0]>0&&p[1]>0))
        cout<<get_positive_number(get_positive_number(p[0])-get_positive_number(p[1]));
    else
        cout<<get_positive_number(get_positive_number(p[0])+get_positive_number(p[1]));
    cout<<" ";
    if((p[0]<0&&p[n-1]<0)||(p[0]>0&&p[n-1]>0))
        cout<<get_positive_number(get_positive_number(p[0])-get_positive_number(p[n-1]));
    else
        cout<<get_positive_number(get_positive_number(p[0])+get_positive_number(p[n-1]));
    cout<<endl;
    for(int i=1;i<n-1;i++)
    {
        if((p[i]<0&&p[i-1]<0)||(p[i]>0&&p[i-1]>0))
            min=get_positive_number(p[i])-get_positive_number(p[i-1]);
        else
            min=get_positive_number(p[i])+get_positive_number(p[i-1]);
        if((p[i]<0&&p[i+1]<0)||(p[i]>0&&p[i+1]>0))
            min2=get_positive_number(p[i+1])-get_positive_number(p[i]);
        else
            min2=get_positive_number(p[i])+get_positive_number(p[i+1]);
        if((p[i]<0&&p[n-1]<0)||(p[i]>0&&p[n-1]>0))
            max=get_positive_number(p[n-1])-get_positive_number(p[i]);
        else
            max=get_positive_number(p[i])+get_positive_number(p[n-1]);
        if((p[i]<0&&p[0]<0)||(p[i]>0&&p[0]>0))
            max2=get_positive_number(p[i])-get_positive_number(p[0]);
        else
            max2=get_positive_number(p[i])+get_positive_number(p[0]);
        if(get_positive_number(min)<get_positive_number(min2))
            cout<<get_positive_number(min);
        else
            cout<<get_positive_number(min2);
        cout<<" ";
            if(get_positive_number(max)>get_positive_number(max2))
                cout<<get_positive_number(max);
        else
            cout<<get_positive_number(max2);
        cout<<endl;
    }
    if((p[n-2]<0&&p[n-1]<0)||(p[n-2]>0&&p[n-1]>0))
        cout<<get_positive_number(get_positive_number(p[n-1])-get_positive_number(p[n-2]));
    else
        cout<<get_positive_number(get_positive_number(p[n-2])+get_positive_number(p[n-1]));
    cout<<" ";
    if((p[0]<0&&p[n-1]<0)||(p[0]>0&&p[n-1]>0))
        cout<<get_positive_number(get_positive_number(p[n-1])-get_positive_number(p[0]));
    else
        cout<<get_positive_number(get_positive_number(p[0])+get_positive_number(p[n-1]));
    cout<<endl;
}
