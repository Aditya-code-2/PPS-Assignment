#include<stdio.h>
#include<conio.h>

void main()
{
    int l,b,area,peri;
    //clrscr();

    printf("Enter length and breath : ");
    scanf("%d\n%d",&l,&b);

    area=l*b;
    peri=2*(l+b);
    printf("Area of rectangle : %d",area);
    printf("\nPerimeter : %d",peri);
    getch();
}