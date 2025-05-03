#include<stdio.h>
#include<conio.h>



void swap(int *a, int *b) {
    int z = *a;
    *a = *b;
    *b = z;
}

void main() {
    int x = 5, y = 10;
    //clrscr();
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    getch();
}

   

   

    