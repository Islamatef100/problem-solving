//the idea is i sort the array and calculate numbers sorted with not dublicated.
//  Bـ CopyCopyCopyCopyCopy
//  Created by Mac on 11/11/21.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int number_of_test_case=0;
    cin>>number_of_test_case;
    while(number_of_test_case--)
    {
        int n,x=0;
        cin>>n;
        int*k=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>k[i];
        }
        sort(k,k+n);
        for(int i=0;i<n-1;i++)
        {
            if(k[i]==k[i+1])
                x++;
        }
                 cout<<n-x<<endl;
    }
    return 0;
}
