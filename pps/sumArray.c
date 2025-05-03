#include<stdio.h>
#include<conio.h>
void main(){
   //declaration
   int a[10],ans,i;
  //clrscr();
   
  //input
  printf("Enter 10 number : \n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);

  //processing
  ans=0;
  for(i=0;i<10;i++)
  ans = ans+a[i];
  printf("\n Sum = %d",ans);


    
    getch();

}