#include <stdio.h>

int main() {
    int secreteNumber = 56;
    int guess;
    int count = 1;
    int limit = 10;
    printf("You have ten trys to guess a number between 0 and 100.\n");
    while (guess != secreteNumber && count <= limit) {
        printf("This is guess number %d\n", count);
        printf("Enter an integer number:\n");
        scanf("%d", &guess);
        count++;
        if (guess < 0 || guess > 100) {
            printf("Number has to be between 0 and 100.\n");
        } else {
            continue;
        }

    }
    if (guess == secreteNumber) {
        printf("You Guessed Correctly!!!!!!!\n");
    } else {
        printf("You ran out of guesses.\n");
    }
    return 0;
}

