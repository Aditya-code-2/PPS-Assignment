#include<stdio.h>
#include<conio.h>

void main(){
    int i,fact;
    int ans = 1;

    printf("Enter any positive integer : ");
    scanf("%d",&fact);
    if (fact<0){
        printf("Error! please enter valid integer number");
    }else{
        for(i=1;i<=fact;i++)
    {
        
       ans = ans*i;
        
    }
    printf("The factorial of the integer is  : %d",ans);\
    getch();
    }
    
   
}