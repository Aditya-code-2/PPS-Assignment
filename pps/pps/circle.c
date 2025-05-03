#include<stdio.h>
#include<conio.h>
void main(){
    float pi= 3.14;

    float ans,r,ans1,r1;
    //clrscr();
    printf("Enter the radius of circle : "); //radius for area of circle
    scanf("%f",&r);
    ans = pi*(r*r); //calculation
    printf("\nArea of circle is : %f",ans); //final answer


    

    printf("\nEnter the radius of circle : "); //raadius for circumference
    scanf("%f",&r1);
    ans1 = 2*pi*r1;//calculation
    printf("Circumference of circle is : %f",ans1); //final answer
    getch();



}