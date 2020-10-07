include <stdio.h>
#include <conio.h>

int main ()
{
	float s ;
	
	printf("Enter the length of one of the sides of the squre in cm :");
	scanf("%f",&s);
	
	float p=s*4;
	
	printf("\n\nPerimeter :%f",p);
	
	getch();
	
	float a=s*s;
	
	printf("\n\nArea      :%fcm/sq",a);
	
	getch();
	
	return 0;
	
}
