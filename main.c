#include <stdio.h>
#include <time.h>

int main(void)
{
    unsigned int seed = (unsigned int)time(NULL);
    seed = seed * 1103515245 + 12345;

    int number = (seed % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // printf("%d\n", number);

    do
    {

        printf("Guess the number");
        scanf("%d", &guessed);
        if(guessed>number){
            printf("Lower number please!\n");
        }
        else{
            printf("Higher number please!\n");
        }
        no_of_guesses++;

    } while (guessed != number);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
