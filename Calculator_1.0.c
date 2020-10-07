#include<stdio.h>//1.0
#include<conio.h>
int main()
{
	
	char a;
	int x , y ;
	
	printf("Enter the First Intger :");
	scanf("%d",&x);
	
	printf("\nEnter the opretion to perform,\n+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\n\n\nEnter :");
	scanf("%s",&a);	
	
	printf("\n\nEnter the Second Intger :");
	scanf("%d",&y);	
	
	if (a == '+')
	printf("Your answer is :%d",x+y);
	
	else if (a =='-')
	printf("Your answer is :%d",x-y);
		
	else if (a =='*')
	printf("Your answer is :%d",x*y);
		
	else if (a =='/')
	
	printf("Your answer is :%d",x/y);		
		
	else
	printf("Error No correct opration Selected =%c ",a);
	
	
	getch();	
	return 0;
	
}
