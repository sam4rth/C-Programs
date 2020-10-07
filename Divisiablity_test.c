#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("Enter The Number who's divisiablity test You Want :");
	scanf("%d",&a);
	
	printf("\nEnter The Number :");
	scanf("%d",&b);
	
	c = b%a ;
	
	if (c == 0)
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nDivisiable");
	
	else printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNot divisiable");
	
	getch();
	
	return 0;
	
}
