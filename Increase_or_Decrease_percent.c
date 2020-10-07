
#include <stdio.h>
#include <conio.h>

int main()
{
	float past,now ;
	
	printf("Enter the Larger amount :");
	scanf("%f",&past);
	
	printf("\nEnter the Smaller Amount :");
	scanf("%f",&now);
	
	float change=past-now;
	
	printf ("\nThe Amount of change is :%f ",change);
	
	getch();
	
	
	float per= (change/now)*100.0;
	
	printf("\n\n\nThe Increase/Decrease Per Cent = %f%%",per);
	printf("\%");
		
	getch();
	return 0;
	
}
