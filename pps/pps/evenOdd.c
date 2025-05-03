#include<stdio.h>
#include<conio.h>

void main(){
    int a;
    //clrscr();
    printf("Enter integer number : ");
    scanf("%d",&a);

    if(a%2==0){ //using % and relational operator ==
        
        printf("The given integer number is even");

    }else{
        printf("The given integer number is odd");
    }
    
    getch();
    
    
    
}