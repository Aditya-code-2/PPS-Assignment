#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,i;
    
    //clrscr();
    printf("Enter base number : ");
    scanf("%d",&a);
    printf("Enter power number :  ");
    scanf("%d",&b);
    c=1;
    for(i=1;i<=b;i++)
    c = c*a;
    printf("Answer : %d",c);
    
    getch();

}