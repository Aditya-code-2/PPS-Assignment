#include<stdio.h>
#include<conio.h>
void main(){
    int math,chem,pps,uhv,phy;
    int marks = 500;
    
    printf("Enter the marks of math : ");
    scanf("%d",&math);
    printf("Enter the marks of chem : ");
    scanf("%d",&chem);
    printf("Enter the marks of PPS : ");
    scanf("%d",&pps);
    printf("Enter the marks of UHV : ");
    scanf("%d",&uhv);
    printf("Enter the marks of phy : ");
    scanf("%d",&phy);
    int sum = math+chem+pps+uhv+phy;
    printf("Total marks : %d",sum);

    float per = sum*100/marks;
    
    printf("\nPercentage : %f",per);


}




