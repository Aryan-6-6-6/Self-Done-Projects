#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // generate new random number every time
    srand(time(NULL));

    // Generate a random number between 1 and 30
    int random_number = (rand() % 50) + 1;
    int guess;
    int num;
    // Input to guess
    printf("Guess a number from (1 to 50) :");
    scanf("%d",&guess);
    // Check if Number is out oof range
    if(guess < 1 ||guess >= 50)
        printf("Guess number is out of range");
    // Statement for guess
    else if(random_number == guess)
            printf("Congratulations!!! You have guessed it");
        
    else {
    // Loop unit guess is correct
    while(random_number != guess) {
        printf("You Guess Wrong Number..Guess it again : ");
        scanf("%d",&guess);
        
        // Check if guess is correct
        if(random_number == guess)
            printf("Congratulations!!! You have guessed it");
            
        }
    }
    return 0;
}
