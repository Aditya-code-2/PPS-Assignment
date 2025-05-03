#include<stdio.h>
#include<conio.h>
void main()
{
    //varable declaration
    int i,j,ans;
    //clrscr();
    //input
    printf("\nEnter the value of N : ");
    scanf("%d",&j);

    //processing and output

    ans =0;
    i=1;
    while(i<=j)
    {
        ans = ans+i;
        i++;

    }
    printf("\nSum : %d",ans);
    getch();
    
}