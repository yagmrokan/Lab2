#include <stdio.h>

int main() {
    char program = 'y';
    char input;
    int c;

    while (program == 'y' || program == 'Y') {
        printf("Enter any printable ASCII character: ");
        scanf(" %c", &input);

        printf("You entered: %c\n", input);
        printf("The ASCII value of the character is: %d\n", input);

        printf("Again (Y/N): ");
        scanf(" %c", &program);

        while (program != 'N' && program != 'n' && program != 'Y' && program != 'y') {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Please enter Y or N: ");
            scanf(" %c", &program);
        }

        printf("----------------------------\n");
    }

    printf("Quitting ...\n");

    return 0;
}

