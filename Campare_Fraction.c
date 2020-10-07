#include <stdio.h>
#include <conio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter the 1st Numerator   :");
	scanf("%d",&a);
	printf("                           ---\n");
	printf("Enter the 1st denominator :");
	scanf("%d",&b);
	
	printf("\n\n\nEnter the 2nd Numerator   :");
	scanf("%d",&c);
	printf("                           ---\n");
	printf("Enter the 2nd denominator :");
	scanf("%d",&d);
	
	printf("\nThe Greater Fraction is...\n\n");
	
	if (a*d > b*c){
	
		printf("%d",a);
		printf("\n---\n");
		printf("%d",b);
	
	}
	else {
		
		printf("%d",c);
		printf("\n---\n");
		printf("%d",d);		
		
	}
	
	
	getch();
	
	return(0);
}
