#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    //clrscr();
    printf("Enter last number : ");
    scanf("%d",&j);
    
    while(j>=1)
    {
        printf("\n%d",j);
        j =j-1;
    }
    getch();

}

