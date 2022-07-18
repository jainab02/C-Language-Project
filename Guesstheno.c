#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("Welcome to the game of guessing no:\n");
    int guess;
    int count =0;
    srand(time(0));
    int n = rand()%100 +1;
    //printf("%d\n",n);
    for(count=0;count<3||n==guess;count++){
    printf("guess the no \n");
    scanf("%d",&guess);
        if(guess<n){
            printf("your guessed no is low! please enter higher number\n");
            continue;
            count++;
        }
        else if (guess>n)
        {
            printf("your guessed no is high! please enter lower number\n");
            continue;
            count++;
        }
        else if (guess==n)
        {
            printf("your guess is correct\n");
            count++;
            break;

        }
    } 
    if (guess==n)
    {
        printf("you have guessed the no in %d attempts",count);
    }
    else
    {
        printf("you loose game as you have used your %d attempts",count);
    }
    
    
}