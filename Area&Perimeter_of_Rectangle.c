#include <stdio.h>
#include <conio.h>

int main ()
{
	float l,b ;
	
	printf("Enter the Length in cm :");
	scanf("%f",&l);
	
    printf("Enter the Breadth in cm :");
	scanf("%f",&b);
	
	
	float p=(l+b)*2;
	
	printf("\n\nPerimeter :%f",p);
	
	getch();
	
	float a=l*b;
	
	printf("\n\nArea      :%fcm/sq",a);
	
	
	getch();
	
	return 0;
	
}
