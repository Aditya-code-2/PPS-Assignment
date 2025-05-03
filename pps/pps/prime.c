#include <stdio.h>
#include<conio.h>

void main() {
    int num, i, prime = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for numbers less than 2
    if (num < 2) {
        printf("%d is NOT a prime number.\n", num);
        getch();
    }

    // Check from 2 to num-1
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }

    // Print result
    if (prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }

   getch();
}
