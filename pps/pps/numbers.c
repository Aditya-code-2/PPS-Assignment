#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    //clrscr();
    printf("Enter last number : ");
    scanf("%d",&j);
    i=1;

    while(i<=j)
    {
        printf("\n%d",i);
        i =i+1;
    }
    getch();

}

