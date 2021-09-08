#include<stdio.h>
char sq[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//Declaration of funcction to be used 
int check();
void chessboard();
void printwlcmmsg();
int main(void)
{
    int player=1,choice_int,i;
    char choice[10],mark;
    do
    {
        printwlcmmsg();
        chessboard();
        player=(player%2)?1:2;
        printf("player %d, enter a number",player);
        gets(choice);
        //atoi() converts s to int value
        choice_int=atoi(choice);
        mark=(player==1)?'X':'O';
        if(sq[0][0]=='1' && choice_int==1)
        {
            sq[0][0]=mark;
        }
        else if(sq[0][1]=='2' && choice_int==2)
        {
            sq[0][1]=mark;
        }
        else if(sq[0][2]=='3' && choice_int==3)
        {
            sq[0][2]=mark;
        }
        else if(sq[1][0]=='4' && choice_int==4)
        {
            sq[1][0]=mark;
        }
        else if(sq[1][1]=='5' && choice_int==5)
        {
            sq[1][1]=mark;
        }
        else if(sq[1][2]=='6' && choice_int==6)
        {
            sq[1][2]=mark;
        }
        else if(sq[2][0]=='7' && choice_int==7)
        {
            sq[2][0]=mark;
        }
        else if(sq[2][1]=='8' && choice_int==8)
        {
            sq[2][1]=mark;
        }
        else if(sq[2][2]=='9' && choice_int==9)
        {
            sq[2][2]=mark;
        }
        else if(sq[0][0]!=1 || sq[0][1]!=2 || sq[0][2]!=3 || sq[1][0]!=4 || sq[1][1]!=5 || sq[1][2]!=6 || sq[2][0]!=7 || sq[2][1]!=8 || sq[2][2]!=9 )
        {
            printf("The value is already marked");
        }
        else
        {
            printf("please enter a valid value");
        }
        i=check();
    player++;
    }while(i==-1);
    printwlcmmsg();
    chessboard();
    if(i==1)
    printf("===Congratulations !!! \a player %d wins !!!===",--player);
    else
    printf("===Unfortunate Draw! \a Better luck next time===");
    return 0;

    return 0;
}
//Defination of the function
void printwlcmmsg()
{
    printf("Tic Tac Toe Game\n");
}
void chessboard()
{ 
  printf("player 1 (X) - player 2 (O)\n\n\n");
  
  printf("   |   |   \n");
  printf(" %c | %c | %c \n",sq[0][0],sq[0][1],sq[0][2]);

  printf("___|___|___\n");
  printf("   |   |   \n");

  printf(" %c | %c | %c \n",sq[1][0],sq[1][1],sq[1][2]);

  printf("___|___|___\n");
  printf("   |   |   \n");

  printf(" %c | %c | %c \n",sq[2][0],sq[2][1],sq[2][2]);

  printf("   |   |   \n\n");
}
int check()
{
    if (sq[0][0]==sq[0][1] && sq[0][1]==sq[0][2])
    return 1;
    else if (sq[1][0]==sq[1][1] && sq[1][1]==sq[1][2])
    return 1;
    else if (sq[2][0]==sq[2][1] && sq[2][1]==sq[2][2])
    return 1;
    else if (sq[0][0]==sq[1][0] && sq[1][0]==sq[2][0])
    return 1;
    else if (sq[0][1]==sq[1][1] && sq[1][1]==sq[2][1])
    return 1;
    else if (sq[0][2]==sq[1][2] && sq[1][2]==sq[2][2])
    return 1;
    else if (sq[0][0]==sq[1][1] && sq[1][1]==sq[2][2])
    return 1;
    else if (sq[0][2]==sq[1][1] && sq[1][1]==sq[2][0])
    return 1;
    else if (sq[0][0]!='1' && sq[0][1]!='2' &&sq[0][2]!='3' && sq[1][0]!='4' && sq[1][1]!='5' && sq[1][2]!='6' && sq[2][0]!='7' && sq[2][1]!='8' && sq[2][2]!='9' )
    return 0;
    else 
    return -1;
}