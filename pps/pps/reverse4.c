#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    //clrscr();
    printf("Enter any 4 digit number : ");
    scanf("%d",&n);

    int a=n%10;
    n=n/10;
    int b=n%10;
    n=n/10;
    int c=n%10;
    n=n/10;
    int d=n%10;
    n=n/10;
    
    int ans = a+b+c+d;
    printf("Sum of 4 digit number  : %d",ans);
    getch();

}