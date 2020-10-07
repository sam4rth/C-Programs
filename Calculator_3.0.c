#include<stdio.h>//3.0 
#include<conio.h>

int add(int,int);

 int subtract(int,int);

int multiply(int,int);

int divide(int,int );




int main()
{
	
	char a;
	int x , y , s;

	printf("Enter the opretion :");
	scanf("%d%c%d",&x,&a,&y);
	
	
	if (a=='+')
	s =add(x,y);
	
	else if (a=='-')
	s=subtract(x,y);
		
	else if (a=='*')
	s=multiply(x,y);		
		
	else if (a=='/')
	s=divide(x,y);		
		
	else
	printf("\n\nError No correct opration Selected");
	
	printf("\n\nYour answer is :%d",s);
	getch();
		
	return 0;
	
}

int add(int x,int y)
{

	return (x+y);
}
 
int subtract(int x,int y)
{

	return (x-y);
}
 
 
 int multiply(int x,int y)
{
	return (x*y);
}

 int divide(int x,int y)
{
	return (x/y);
}
