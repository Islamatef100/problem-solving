//B. Easter Eggs
//  78B
//  Created by Mac on 2/19/22.
#include <iostream>
using namespace std;
int main()
{
    int length_of_circuit=0;
    cin>>length_of_circuit;
    char *circuit=new char[length_of_circuit];
    char charcter[7]={'R','O','Y','G','B','I','V'};
    for(int i=0;i<7;i++)
    {
        circuit[i]=charcter[i];
    }
    for(int i=7;i<length_of_circuit;i++)
    {
        for(int t=0;t<7;t++)
        {
            if(i==length_of_circuit-1)
                {
                    //this condition becouse the question need circuit .
                    if(charcter[t]==circuit[0]||charcter[t]==circuit[1]||charcter[t]==circuit[2]||charcter[t]==circuit[i-1]||charcter[t]==circuit[i-2]||charcter[t]==circuit[i-3])
                        continue;
                    else
                        circuit[i]=charcter[t];
                }
            else
                {
                    if(charcter[t]==circuit[i-1]||charcter[t]==circuit[i-2]||charcter[t]==circuit[i-3])
                        continue;
                    else
                        circuit[i]=charcter[t];
                }
            
        }
    }
    //circuit[length_of_circuit+1]='\0';//i write this to print only the characters.
    for(int i=0;i<length_of_circuit;i++)
    cout<<circuit[i];
    cout<<endl;
   // cout<<circuit<<endl;// i made this comment bcouse codefors compiler print spase after the character and don't accept this.
}
