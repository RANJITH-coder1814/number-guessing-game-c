#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;

    printf("Guess the number (1-100)\n");

    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > num) printf("Too high!\n");
        else if (guess < num) printf("Too low!\n");
        else printf("Correct! Attempts: %d\n", tries);

    } while (guess != num);

    return 0;
}
