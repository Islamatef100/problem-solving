#include <iostream>
#include <ctime>
using namespace std;
class the_game
{
private:
    char choose;
    int ran[2],score=0;
public:
    the_game( ){
        cout<<"welcom in the game\n";
        score=0;
    }
    bool if_succed=true;
    void play();
};
void the_game::play()
{
    while(if_succed)
    {
    srand(time(0));
    ran[0]=rand()%2;
    if(ran[0]==0)
        ran[1]=1;
    else
        ran[1]=0;
    cout<<"Whate You Want\n1-right 2-lift\n"
        <<"|1|     |2|\n ";
    cin>>choose;
        if(choose!='1'&&choose!='2')
        {
            cout<<"You Can Not Choose Another 1 or 2\n";
            if_succed=false;
        }
        else{
            if(choose=='1'&&ran[0]==1){
                cout<<"OK continue\n";score++;}
            else if(choose='2'&&ran[1]==1){
                cout<<"OK continue\n";score++;}
        else{
            cout<<"You failed\n";
        if_succed=false;
            cout<<"Your Score "<<score<<endl;
        }
    }
    }
}
int main()
{
    the_game play;
    play.play();
}
