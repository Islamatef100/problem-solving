//490A - Team Olympiad
//  A_Team_olympiad
//  Created by Mac on 10/12/21.
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    vector<int>student_one;
    vector<int>student_two;
    vector<int>student_three;
    int number_of_student,skill=0,number_of_teams=0;
    cin>>number_of_student;
    for(int i=0;i<number_of_student;i++)
    {
        cin>>skill;
        if(skill==1)
         student_one.push_back(i);
        else  if(skill==2)
            student_two.push_back(i);
       else if(skill==3)
           student_three.push_back(i);
    }
    number_of_teams=min(student_one.size(),min(student_two.size(),student_three.size()));
    cout<<number_of_teams<<endl;
    for(int i=0;i<number_of_teams;i++)
    {
        cout<<student_one[i]+1<<" "<<student_two[i]+1<<" "<<student_three[i]+1<<endl;
    }
}
