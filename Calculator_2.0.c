#include<stdio.h>//2.0
#include<conio.h>
int main()
{
	
	
	char a;
	int x , y ;
	
	printf("Enter the opretion :");
	scanf("%d%c%d",&x,&a,&y);
	
	if (a == '+')
	printf("\n\nYour answer is :%d",x+y);
	
	else if (a =='-')
	printf("\n\nYour answer is :%d",x-y);
		
	else if (a =='*')
	printf("\n\nYour answer is :%d",x*y);
		
	else if (a =='/')
	
	printf("\n\nYour answer is :%d",x/y);		
		
	else
	printf("\n\nError No correct opration Selected,\nYou Selected =%c ",a);
	
	
	getch();	
	return 0;
	
}
