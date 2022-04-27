//  1204A
//  Created by Mac on 4/27/22.
#include <iostream>
#include <cmath>
using namespace std;
 long long convert_binary_to_decimal(long long n)
{
    int dec = 0, i = 0, rem;
    
    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    
    return dec;
}
int main()
{
    long long number;
    int x=1,i=0;
    cin>>number;
    number=convert_binary_to_decimal(number);
    cout<<number<<endl;    
    while(number>x)
    {
        x*=4;
        i++;
        cout<<"x= "<<x<<endl;
    }
    cout<<i<<endl;
}
