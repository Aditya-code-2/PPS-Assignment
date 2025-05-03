#include<stdio.h>
#include<conio.h>


void main(){
    int a[10] ,i;
    //clrscr();

    printf(" Enter any 10 numbers : \n");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);
    
    printf("The second index number is : %d",a[2]);

    getch();


}