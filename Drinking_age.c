#include <stdio.h>
#include <conio.h>

int main()
{

int age;
printf("Your Age :");
scanf("%d", &age);
  
if(age > 21) {
  printf("\n\nDrinks allowed !");
} 
else if (age< 13) {
  printf("\n\nKid go and study math !");
}
else printf("\n\nNo Drinks !");
getch();
}
