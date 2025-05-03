#include<stdio.h>
#include<conio.h>

void main()
{
    float pa,dis,na;
    //clrscr();
    dis=0;
    printf("\nEnter purchase amount : ");
    scanf("%f",&pa);
    if(pa>=1000)
    {
        dis =pa*0.1;
        
    }
    na =pa-dis;
    printf("\nPurchase Amount : %f",pa);
    printf("\nDiscount Amount : %f",dis);
    printf("\nNet Payable Amount : %f",na);
}