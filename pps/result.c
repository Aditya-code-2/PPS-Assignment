#include<stdio.h>
#include<conio.h>

void main(){
    int math,phy,chem,pps,uhv;
    int total = 500;
    //clrscr();
    printf("Enter math marks : ");//input obtained marks by student 
    scanf("%d",&math);
    printf("Enter math phy : ");
    scanf("%d",&phy);
    printf("Enter math chem : ");
    scanf("%d",&chem);
    printf("Enter math PPS : ");
    scanf("%d",&pps);
    printf("Enter math UHV : ");
    scanf("%d",&uhv);

    int obtained = math+phy+chem+pps+uhv;//sum of obnatained marks
    printf("\nTotal marks obtained : %d",obtained);
    float per = obtained*100/total; //percerntage
    printf("\nPercentage : %f",per);
}