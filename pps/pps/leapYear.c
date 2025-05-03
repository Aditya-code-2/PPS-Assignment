#include<stdio.h>
#include<conio.h>

void main(){
    int a;
    //clrscr();
    printf("Enter year : ");
    scanf("%d",&a);
    if(a%4==0){
        printf("The given year is leap year");
    }else{
        printf("The given year is not leap year");
    }
    getch();
}