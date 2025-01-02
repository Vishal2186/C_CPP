#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//#include<conio.h>


bool r;
int i = 1;
char turn = 'O';
char arr[] = {'1','2','3','4','5','6','7','8','9'};
int choies;

bool winner();
int display(){
    system("clear");
    // clrscr();
    printf("\t\t T I C   T A C   T O E \n");
    printf("player1 = [X]\nplayer2 = [O]\n");
    printf("Enter 10 to exit the game...\n");
    printf("\n\n");

    for (int i = 0; i < 9; i++)
    { 
       if( i==0 || i==3 || i==6 || i==8){ printf("\t\t     |     |     \n");} 
       else if( i==1 || i==4 || i==7){ printf("\t\t  %c  |  %c  |  %c  \n",arr[i-1],arr[i],arr[i+1]);}
       else{printf("\t\t_____|_____|_____\n");}
    }printf("\n");
    
    
return 0;
}

void playerturn(){
 char v;
    if(turn == 'X'){printf("\nplayer1 - [X] turn = ");}
   else if(turn == 'O'){printf("\nplayer2 - [O] turn = ");}
   scanf("%d",&choies);

    if(turn == 'X'){v = 'X';}
    else{v = 'O';}

      switch (choies)
    {
    case 1: if(arr[0]=='1'){arr[0] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 2: if(arr[1]=='2'){arr[1] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 3: if(arr[2]=='3'){arr[2] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 4: if(arr[3]=='4'){arr[3] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 5: if(arr[4]=='5'){arr[4] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 6: if(arr[5]=='6'){arr[5] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 7: if(arr[6]=='7'){arr[6] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 8: if(arr[7]=='8'){arr[7] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 9: if(arr[8]=='9'){arr[8] = v;}
            else{printf("Place is full!!!");if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 10: printf("\n\t\t< < < E X I T > > >"); exit(0); break;
    default: printf("Invalied choies!!!\n"); break;}
    
}
void game_over(){
    display();
    printf("\n\tPlayer - [%c] WON!!!",turn);
    }

bool winner(){
    if(arr[0] == arr[1] && arr[1] == arr[2]
    ||arr[3] == arr[4] && arr[4] == arr[5]
    || arr[6] == arr[7] && arr[7] == arr[8]
    || arr[0] == arr[3] && arr[3] == arr[6]
    || arr[1] == arr[4] && arr[4] == arr[7]
    || arr[2] == arr[5] && arr[5] == arr[8]
    || arr[0] == arr[4] && arr[4] == arr[8]
    || arr[2] == arr[4] && arr[4] == arr[6]){printf("\nGAME OVER!!!");game_over();return false;
        }
    
  
   else if(
   arr[0]=='1'||
   arr[1]=='2'||
   arr[2]=='3'||
   arr[3]=='4'||
   arr[4]=='5'||
   arr[5]=='6'||
   arr[6]=='7'||
   arr[7]=='8'||
   arr[8]=='9'){return true;}
   else{arr[choies]=turn;display();printf("Match Draw!!!");return false;}
}


int main(){

  do{
if(turn=='O'){turn = 'X';}else{turn='O';}
display();
playerturn();
winner();
   i++;
   }
while (winner());

return 0;}