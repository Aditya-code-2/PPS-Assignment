#include<stdio.h>
#include<conio.h>
void main(){
   int choice;
   //clrscr();

   printf("FOOD MENU");
   printf("\n1. fried pulse with rice and spicy bhujiya. ");
   printf("\n2. A savory stuffed pastry or fried pastry with filling.");
   printf("\n3. Cicular bread with stuffed  fried patatos.");
   printf("\n4. Fried cauliflower,ptatos with different types of spices.");
   printf("\n5. Classic chicken sandwitch. ");
   printf("\n6. Exit");
   printf("\nEnter your choice (1-6) : ");
   scanf("%d",&choice);

   switch(choice)
   {
    case 1 : 
    printf("\nOrder confirmed\n");
    printf("\n1. fried pulse with rice and spicy bhujiya. ");
    break;
    case 2 : 
    printf("\nOrder confirmed\n");
    printf("\n2. A savory stuffed pastry or fried pastry with filling. ");
    break;
    case 3 : 
    printf("\nOrder confirmed\n");
    printf("\n3. Cicular bread with stuffed fried patatos. ");
    break;
    case 4 : 
    printf("\nOrder confirmed\n");
    printf("\n4. Fried cauliflower,ptatos with different types of spices. ");
    break;
    case 5 : 
    printf("\nOrder confirmed\n");
    printf("\n5. Classic chicken sandwitch. ");
    break;
    case 6 :
    
    printf("Thank you visit again");
    
    exit(0);
    default : printf("\nWrong choice \n");
   }
   getch();
   

  

}