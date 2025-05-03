#include<stdio.h>
#include<conio.h>

void main(){
    int math,phy,chem,pps,uhv;
    int total = 500;
    //clrscr();
    printf("Enter math marks : ");//input marks
    scanf("%d",&math);
    printf("Enter phy marks : ");
    scanf("%d",&phy);
    printf("Enter chem marks : ");
    scanf("%d",&chem);
    printf("Enter pps marks : ");
    scanf("%d",&pps);
    printf("Enter uhv marks : ");
    scanf("%d",&uhv);

    int obtained = math+phy+chem+pps+uhv;//sum of obnatained marks
    printf("\nTotal marks obtained : %d",obtained);
    float per = obtained*100/total; //percerntage
    printf("\nPercentage : %f",per);
    


    if(per<60) //below 60% grade D 
    printf("\nGrade : D\n");

    if(per>=60&&per<=80)//60% to 80% grade C
    printf("\nGrade : C\n");

    if(per>80&&per<=90)//80% to 90% grade B
    printf("\nGrade : B\n");

    if(per>90&&per<=100)//90% to 100% grade A
    printf("\nGrade : A\n");
    getch();

}