#include<stdio.h>
#include<conio.h> 

void main(){
    int a,b,c;
    //clrscr();

    printf("\nEnter any integer number (first) : \n");
    scanf("%d",&a);
    printf("\nEnter any integer number (second) : \n");
    scanf("%d",&b);
    c=a; //swap using third variable 
    a=b;
    b=c;
    printf("\nAfter swap first number is : %d",a);
    printf("\nAfter swap second number is : %d",b);
    getch();
    

}