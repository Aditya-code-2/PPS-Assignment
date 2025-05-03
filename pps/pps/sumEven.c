#include <stdio.h>
#include<conio.h>

int main() {
    int  N, i;
    //clrscr();
    int sumEven = 0, sumOdd = 0;

   
    printf("Enter the ending number: ");
    scanf("%d", &N);

    // Loop through the range and calculate sums
    for(i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            sumEven = sumEven + i;  // Instead of sumEven += i;
        } else {
            sumOdd = sumOdd + i;    // Instead of sumOdd += i;
        }
    }

    // Output the results
    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d\n", sumOdd);

    getch();
}
