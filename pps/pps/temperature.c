#include<stdio.h>
#include<conio.h>

void main(){
    float a=1.8; // 9/5=1.8
    int b=32; 
    int c;
    float f;
    //clrscr();
// using formula c*9/5+32 =f
    printf("Enter temperature in centigrade : ");
    scanf("%d",&c);

    f = c*1.8+32;
    printf("Fahrenheit is : %f",f);
    getch();

}