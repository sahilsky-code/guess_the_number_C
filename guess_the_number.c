/*we will write a program that generates a random number and ask the player to guess it. If the player guess the higher than the actual number, the program display "lower number please" . similarly if the user guess is too low, the program prints "higher the number please". when  the user guess the correct number, the program displays the number of guesses the player used to arive at the number. */ 

#include<stdio.h>
#include<stdlib.h>//library is used to generate any random number
#include<time.h>// this library is used to run time function


int main(){
 //to geerate random number   
int number, guess, nguess = 1;
srand(time(0));//this function produce random number every time.
number = rand()%100 + 1;// %100 + 1, generates random number bw 1 and 100.
// printf("The Number is ~~ %d\n\n", number);

//keep running the loop untill the number is guessed.

do{
    printf("GUESS THE NUMBER B/W 1 TO 100 !!\n");
    scanf("%d",&guess);
    if(guess>number){
     printf("LOWER NUMBER PLEASE!!! \n");
    }
    else if(guess<number){
    printf("HIGHER NUMBER PLEASE!!! \n");
    }
    else{
        printf("YOU GUESSED IT IN %d ATTEMPTS!!\n",nguess);
    }
    nguess++;
}while(guess!=number);

    
    return 0;
}
