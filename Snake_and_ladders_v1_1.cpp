// Between two players
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<conio.h>
using namespace std;

void board();
int check_progress();
int roll_dice();

int roll;
int player2_roll;
int input;
int progress;
int player=0;
int player2=0;
int squares[101];

int main(){
    srand(time(NULL));
    string alert="";
    string player2_alert="";
    cout<<"Welcome to Snake and ladders press any key to roll dice "<<endl;
    cout<<"Snakes\tLadders\n99-5\t4-36\n93-25\t8-28\n77-9\t20-41\n52-6\t35-67\n30-2\t45-66\n\n";
    cout<<"Here The number 222 will show player1's position and 333 will show player2's position\n"<<endl;
    for(int i=1;i<=100;i++)
        squares[i]=i;
    do{
        cout<<"Player1 press any to roll the dice: "<<endl;
        getch();
        roll=roll_dice();
        if((roll+player)>100)
            player =player;
        else{
            squares[player]=player;
            player=player+roll;
        }


        switch(player){
            case 99:
                player=5;
                alert="ohh! you ran into a snake";
                break;
            case 93:
                player=25;
                alert="ohh! you ran into a snake";
                break;
            case 77:
                player=9;
                alert="ohh! you ran into a snake";
                break;
            case 52:
                player=6;
                alert="ohh! you ran into a snake";
                break;
            case 30:
                player=2;
                alert="ohh! you ran into a snake";
                break;
            case 45:
                player=66;
                alert="wow! you got a ladder";
                break;
            case 35:
                player=67;
                alert="wow! you got a ladder";
                break;
            case 20:
                player=41;
                alert="wow! you got a ladder";
                break;
            case 8:
                player=28;
                alert="wow! you got a ladder";
                break;
            case 4:
                player=36;
                alert="wow! you got a ladder";
                break;
            default:
                alert="";
                break;
        }

        squares[player]=222;
        if(5){
            cout<<"Player1 rolled: "<<roll<<"\n"<<""<<endl;
            cout<<alert<<"\n"<<endl;
            cout<<"Player1's  position: "<<player<<"\n"<<endl;
            cout<<"Player2's position: "<<player2<<"\n"<<endl;

            board();
            if(squares[100]==222){
                cout<<"Player1 wins\n";
                return 0;
            }
            cout<<"Snakes\tLadders\n99-5\t4-36\n93-25\t8-28\n77-9\t20-41\n52-6\t35-67\n30-2\t45-66\n\n";
        }

        cout<<"player2 enter press any key to roll the dice: "<<endl;
        getch();
        player2_roll=roll_dice();
        if((player2_roll+player2)>100)
            player2 =player2;
        else{
            squares[player2]=player2;
            player2 = player2+player2_roll;
        }
        switch(player2){
            case 99:
                player2=5;
                player2_alert="ohh! player2 ran into a snake";
                break;
            case 93:
                player2=25;
                player2_alert="ohh! player2 ran into a snake";
                break;
            case 77:
                player2=9;
                player2_alert="ohh! player2 ran into a snake";
                break;
            case 52:
                player2=6;
                player2_alert="ohh! player2 ran into a snake";
                break;
            case 30:
                player2=2;
                player2_alert="ohh! player2 ran into a snake";
                break;
            case 45:
                player2=66;
                player2_alert="wow! player2 got a ladder";
                break;
            case 35:
                player2=67;
                player2_alert="wow! player2 got a ladder";
                break;
            case 20:
                player2=41;
                player2_alert="wow! player2 got a ladder";
                break;
            case 8:
                player2=28;
                player2_alert="wow! player2 got a ladder";
                break;
            case 4:
                player2=36;
                player2_alert="wow! player2 got a ladder";
                break;
            default:
                player2_alert="";
                break;
        }
        squares[player2]=333;

        if(5){
            cout<<"Player2 rolled: "<<player2_roll<<"\n"<<endl;
            cout<<player2_alert<<"\n"<<endl;
            cout<<"Player2's position: "<<player2<<"\n"<<endl;
            cout<<"Player1's  position: "<<player<<"\n"<<endl;

            board();
            if(squares[100]==333){
                cout<<"Player2 wins\n";
                return 0;
            }
            cout<<"Snakes\tLadders\n99-5\t4-36\n93-25\t8-28\n77-9\t20-41\n52-6\t35-67\n30-2\t45-66\n\n";
        }
        progress=check_progress();
    }
    while( progress ==0);

    return 0;
}
void board(){
    cout<<"--------------------------------------------------------------------------"<<endl<<endl; //71 -'s
    cout<<squares[100]<<" "<<"|"<<"\t"<<squares[99]<<" "<<"|"<<"\t"<<squares[98]<<" "<<"|"<<"\t"<<squares[97]<<" "<<"|"<<"\t"<<squares[96]<<" "<<"|"<<"\t"<<squares[95]<<" "<<"|"<<"\t"<<squares[94]<<" "<<"|"<<"\t"<<squares[93]<<" "<<"|"<<"\t"<<squares[92]<<" "<<"|"<<"\t"<<squares[91]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //71 -'s
    cout<<squares[81]<<" "<<"|"<<"\t"<<squares[82]<<" "<<"|"<<"\t"<<squares[83]<<" "<<"|"<<"\t"<<squares[84]<<" "<<"|"<<"\t"<<squares[85]<<" "<<"|"<<"\t"<<squares[86]<<" "<<"|"<<"\t"<<squares[87]<<" "<<"|"<<"\t"<<squares[88]<<" "<<"|"<<"\t"<<squares[89]<<" "<<"|"<<"\t"<<squares[90]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //71 -'s
    cout<<squares[80]<<" "<<"|"<<"\t"<<squares[79]<<" "<<"|"<<"\t"<<squares[78]<<" "<<"|"<<"\t"<<squares[77]<<" "<<"|"<<"\t"<<squares[76]<<" "<<"|"<<"\t"<<squares[75]<<" "<<"|"<<"\t"<<squares[74]<<" "<<"|"<<"\t"<<squares[73]<<" "<<"|"<<"\t"<<squares[72]<<" "<<"|"<<"\t"<<squares[71]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //68 -'s
    cout<<squares[61]<<" "<<"|"<<"\t"<<squares[62]<<" "<<"|"<<"\t"<<squares[63]<<" "<<"|"<<"\t"<<squares[64]<<" "<<"|"<<"\t"<<squares[65]<<" "<<"|"<<"\t"<<squares[66]<<" "<<"|"<<"\t"<<squares[67]<<" "<<"|"<<"\t"<<squares[68]<<" "<<"|"<<"\t"<<squares[69]<<" "<<"|"<<"\t"<<squares[70]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //68 -'s
    cout<<squares[60]<<" "<<"|"<<"\t"<<squares[59]<<" "<<"|"<<"\t"<<squares[58]<<" "<<"|"<<"\t"<<squares[57]<<" "<<"|"<<"\t"<<squares[56]<<" "<<"|"<<"\t"<<squares[55]<<" "<<"|"<<"\t"<<squares[54]<<" "<<"|"<<"\t"<<squares[53]<<" "<<"|"<<"\t"<<squares[52]<<" "<<"|"<<"\t"<<squares[51]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //68 -'s
    cout<<squares[41]<<" "<<"|"<<"\t"<<squares[42]<<" "<<"|"<<"\t"<<squares[43]<<" "<<"|"<<"\t"<<squares[44]<<" "<<"|"<<"\t"<<squares[45]<<" "<<"|"<<"\t"<<squares[46]<<" "<<"|"<<"\t"<<squares[47]<<" "<<"|"<<"\t"<<squares[48]<<" "<<"|"<<"\t"<<squares[49]<<" "<<"|"<<"\t"<<squares[50]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //68 -'s
    cout<<squares[40]<<" "<<"|"<<"\t"<<squares[39]<<" "<<"|"<<"\t"<<squares[38]<<" "<<"|"<<"\t"<<squares[37]<<" "<<"|"<<"\t"<<squares[36]<<" "<<"|"<<"\t"<<squares[35]<<" "<<"|"<<"\t"<<squares[34]<<" "<<"|"<<"\t"<<squares[33]<<" "<<"|"<<"\t"<<squares[32]<<" "<<"|"<<"\t"<<squares[31]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //68 -'s
    cout<<squares[21]<<" "<<"|"<<"\t"<<squares[22]<<" "<<"|"<<"\t"<<squares[23]<<" "<<"|"<<"\t"<<squares[24]<<" "<<"|"<<"\t"<<squares[25]<<" "<<"|"<<"\t"<<squares[26]<<" "<<"|"<<"\t"<<squares[27]<<" "<<"|"<<"\t"<<squares[28]<<" "<<"|"<<"\t"<<squares[29]<<" "<<"|"<<"\t"<<squares[30]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //68 -'s
    cout<<squares[20]<<" "<<"|"<<"\t"<<squares[19]<<" "<<"|"<<"\t"<<squares[18]<<" "<<"|"<<"\t"<<squares[17]<<" "<<"|"<<"\t"<<squares[16]<<" "<<"|"<<"\t"<<squares[15]<<" "<<"|"<<"\t"<<squares[14]<<" "<<"|"<<"\t"<<squares[13]<<" "<<"|"<<"\t"<<squares[12]<<" "<<"|"<<"\t"<<squares[11]<<" "<<"|"<<"\t"<<endl;
     cout<<"--------------------------------------------------------------------------"<<endl<<endl; //68 -'s
    cout<<squares[1]<<" "<<"|"<<"\t"<<squares[2]<<" "<<"|"<<"\t"<<squares[3]<<" "<<"|"<<"\t"<<squares[4]<<" "<<"|"<<"\t"<<squares[5]<<" "<<"|"<<"\t"<<squares[6]<<" "<<"|"<<"\t"<<squares[7]<<" "<<"|"<<"\t"<<squares[8]<<" "<<"|"<<"\t"<<squares[9]<<" "<<"|"<<"\t"<<squares[10]<<" "<<"|"<<"\t"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl<<endl;
}
int roll_dice(){
    return (rand()%6)+1;
}
int check_progress(){
    if(squares[100]==222 || squares[100]==333)
        return 1;
    else
        return 0;
}
