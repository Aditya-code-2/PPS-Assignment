#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    //clrscr();
    printf("\nEnter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
     

    if(a==b){//relational operator 
        printf("\nThe given numbers is equal\n");
    }else{
        printf("\nThe given numbers is not equal\n");
    }
    getch();

}