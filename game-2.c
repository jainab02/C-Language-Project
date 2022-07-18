#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakegame(char you,char system);

int main(){
    char system,you;

    /*s=snake g=gun w=water
    //ss ,sw,sg
    //ws,ww,wg
    //gs,gg,gw
    ww,gg,ss = draw conditons (0)
    sw,,wg,gs=win(1)
    others=loss(-1)
    */
    
    srand(time(0));
    int n = rand()%100 +1;
    if (n<33)
    {
        system ='s';
    }
    else if (n>33 && n<66)
    {
        system ='w';
    }
    else
    {
        system ='g';
    }

    printf("enter the 's'for snake,'w' for water and 'g' for gun : \n");
    scanf("%c",&you);

    int result = snakegame(you,system);
    if(result==1){
        printf("you have won this game\n");
    }
    else if (result==0)
    {
        printf("you draw the game\n");
        /* code */
    }
    else{
        printf("you loss the game\n");
    }

    printf("you choose %c and computer choose %c ",you,system);
    return 0;
}

int snakegame(char you,char system){

    if (you=='w' && system =='g')
    {
        return 1;
    }
    else if (you=='g' && system=='w')
    {
        return -1;
    }

    if (you=='s' && system=='w')
    {
        return 1;
    }
    else if (you=='w' && system=='s')
    {
        return -1;
    }

    if (you=='g' && system=='s')
    {
        return 1;
    }
    else if (you=='s' && system=='g')
    {
        return -1;
    }

    if (you == system)
    {
        return 0;
    }
}
