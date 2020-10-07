#include <stdio.h>
#include <conio.h>

int main()
{
	int input,b=0 , c = 1 ;
	printf("Enter how many even number are needed :");
	scanf("%d",&input);
	printf("\nHere is what you need\n");
	
	while (b < input){
	
	printf("%d\n",2*c);
	c++;
	b++;
	}
	
	getch();
	
	
	
	
	
}
