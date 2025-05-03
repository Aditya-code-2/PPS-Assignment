#include <stdio.h>
#include <conio.h>
void main() {
    int n, i;
    int minElement, maxElement;
    //clrscr();
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    minElement = arr[0];
    maxElement = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < minElement)
            minElement = arr[i];
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }
    
    printf("Minimum element: %d\n", minElement);
    printf("Maximum element: %d\n", maxElement);
    getch(); // Wait for a key press
}