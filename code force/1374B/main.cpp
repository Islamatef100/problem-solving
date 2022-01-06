//1374B.multiply by 2,divide by d
#include <iostream>
using namespace std;
int get_min( )
{
    int num,count=0,cond=0;//cond its condition i create it for return if i cant do it ant its umber i dond make sure from it.
    //  cout<<"enter the number:";
    cin>>num;
    while(num!=1)
    {
        if(num%6==0)
            num/=6;
        else
        { if(cond==20)
            return -1;
            num*=2;cond++;}
        count++;
        //    cout<<"count="<<count<<endl; //this line just for test.
        //    cout<<"num="<<num<<endl;     //this line just for test.
        
    }
    return count;
}
int main()
{
    //this code for just solution but it not effecint 100% becouse i dont know the condition of exit from runing if the code can not solve.
    int n;
    // cout<<"enter n:";
    cin>>n;
    for(int i=0;i<n;i++)
    cout<< get_min()<<endl;
    //387420489
}
