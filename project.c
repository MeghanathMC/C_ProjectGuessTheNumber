#include<stdio.h>
#include<stdlib.h>
int main()
{
    int trials;
    printf("enter the number of trials?\n");
    scanf("%d",&trials);
    int actNumber = (rand() % 100 )+1;
    int i=1,guessNumber;
    do{
        printf("guess the number!\n");
        scanf("%d",&guessNumber);
        if(guessNumber == actNumber){
            printf("User won the game!");
            break;
        }
            else if (guessNumber>actNumber){
                printf("the guessed number is very high!\n");
            }
            else{
                printf("the guessed number is too low!\n");
            }
        
        i++;

    }while(i<=trials);
}