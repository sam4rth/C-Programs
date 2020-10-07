#include <stdio.h>//Made By Samarth Srivastava
#include <conio.h>

int main(){
	
	float a,b,c;
	printf ("Can we Buld a triangel?Give length");
	
	printf("\n\nEnter the 1st Length :");
	scanf("%f",&a);
	printf("Enter the 2nd Length :");
	scanf("%f",&b);
	printf("Enter the 3rd Length :");
	scanf("%f",&c);
	
	if (a+b>c&&b+c>a&&c+a>b)//The forula
	printf("\n\nTrue :We Can buld a Triangel");
	
	else 
	printf("\n\nFalse :We can't buld a Triangel");
	
	
	
	getch();
	return 0;
	
	
}
