#include<stdio.h>
#include<conio.h>


void main(){
    int p;
    
    float si,r,t;
      printf("Enter principal amount : ");
      scanf("%d",&p); //input principal
      printf("Enter rate of interest : ");
      scanf("%f",&r); //rate
      printf("Enter duration : ");
      scanf("%f",&t); //time
      si = (p*r*t)/100;
      printf("Simple interest is : %f",si);
      getch();




}