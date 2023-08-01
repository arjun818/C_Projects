#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* Note: While Playing this game comment 
out the 1st printf portion*/ 

    int main(){
    printf("Hi Fellas!! Welcome to my Number Guessing game.\n");    
    int number,guess,no_of_guessess=1;
    srand(time(0));
    number=rand()%100 + 1;//Generates number between 1 to 100
    // printf("The number is: %d\n",number);
    //Keep running the loop untill the number is guessed
    do
    {
        printf("Guess the number between 1 to 100: \n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number plz!!\n");
        }

        else if(guess<number)
        {
            printf("Higher number plz!!\n");
        }

        else
        {
             printf("You have guessed it in %d attempts\n",no_of_guessess);
        }
no_of_guessess++;
        
    } while (guess!=number);
    

    return 0;
}