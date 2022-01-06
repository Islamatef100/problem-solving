//1097A - Gennady and a Card Game
#include <iostream>
#include <string>
using namespace std;
//#define
int A_Gennady_and_a_Card_Game(){
    string  table,hand[5];
    //   cout<<"enter card of the table\n";
    cin>>table;
    //  cout<<"enter cards of u:\n";
    cin>>hand[0]>>hand[1]>>hand[2]>>hand[3]>>hand[4];
    for(int i=0;i<5;i++)
    {
        if(table[0]==hand[i][0]||table[1]==hand[i][1])
        { cout<<"YES\n";return 0;}
    }
    cout<<"NO\n";
    return 0;
}
int main( )
{
    A_Gennady_and_a_Card_Game();
}
