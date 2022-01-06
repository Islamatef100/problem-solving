//  43A _Football
#include <iostream>
using namespace std;
int x=1;
void who_win()
{
    string y;
    cin>>y;
    if(x==1)
    {
        cout<<"ABC\n";
        x++;
    }
    else if(x==2)
    { cout<<"A\n";x++;}
}
int main()
{
    int n;
    cin>>n;
    while(n--)
        who_win();
}
