#include<stdio.h>
#include<conio.h>
void main(){
    int n,x,y,z;
    //clrscr();
    
    z=0;
    x=0;
    y=1;
    printf("\n Enter max limit : ");
    scanf("%d",&n);
    while(z<=n){
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
        

    }
    getch();
}