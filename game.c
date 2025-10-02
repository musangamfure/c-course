#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void){
    int number, guess, nguesses = 1;

    srand(time(NULL));
    number = rand() % 100 + 1;

    do{

        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < number){
            printf("Too low\n");
        }
        else if (guess > number){
            printf("Too high\n");
        }
        else{
            printf("You got it in %d guesses\n", nguesses);
        }
        nguesses++;

    }


while(guess != number);



}

