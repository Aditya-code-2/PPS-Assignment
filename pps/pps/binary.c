#include <stdio.h>
#include<conio.h>
#include <math.h>

void main() {
    long long binary;
    int decimal = 0, i = 0, digit;
    //clrscr();

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal : %d\n", decimal);
    getch();
}
