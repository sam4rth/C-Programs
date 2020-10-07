#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	float r;
	float pi=3.14;
	
	printf("Enter the Radius :");
	scanf("%f",&r);
	
	float c=(pi*r)*2;
	
	printf ("\n\nCircumference :%f",c);
	
	getch();
	
	float a=(r*r)*pi;
	
	printf ("\n\nArea :%f",a);
	
	getch();
	
	return 0;
}
