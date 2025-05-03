#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a,b,c,s,area;
    //clrscr();
    printf("Enter the three side of the triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is : %f",area);
    getch();
}