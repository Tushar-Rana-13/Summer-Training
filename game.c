#include <stdio.h>

int main() {
    int apples = 21;
    int user, computer;

    printf("=== 21 Apples Game ===\n");
    printf("Rules:\n");
    printf("1. There are 21 apples.\n");
    printf("2. You can pick 1 to 4 apples each turn.\n");
    printf("3. The player who leaves 1 apple loses.\n\n");

    while (apples > 1) {
        printf("\nApples remaining: %d\n", apples);

        // User turn
        do {
            printf("Enter apples to pick (1-4): ");
            scanf("%d", &user);

            if (user < 1 || user > 4 || user >= apples) {
                printf("Invalid move! Try again.\n");
            }
        } while (user < 1 || user > 4 || user >= apples);

        apples -= user;

        if (apples == 1) {
            printf("\nOnly 1 apple left!\n");
            printf("You left the last apple.\n");
            printf("You Lose! Computer Wins!\n");
            break;
        }

        // Computer turn (smart strategy)
        computer = 5 - user;

        if (computer >= apples)
            computer = apples - 1;

        printf("Computer picks %d apple(s).\n", computer);

        apples -= computer;

        if (apples == 1) {
            printf("\nOnly 1 apple left!\n");
            printf("Computer left the last apple.\n");  
            printf("Computer Loses! You Win!\n");
            break;
        }
    }

    return 0;
}