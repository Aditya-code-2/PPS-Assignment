#include<stdio.h>
#include<conio.h>

void main(){
    int t,ans,i;
    //clrscr();
    printf("Enter a number : ");
    scanf("%d",&t);

    printf("\nThe table of %d : \n",t);
    for(i=1;i<=10;i++){       
        ans =t*i;
   printf("\n%d x %d = %d\n",i,t,ans);
    }
    getch();

    
}