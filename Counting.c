#include<stdio.h>
#include<conio.h>

int main()
{
	int a , b ;
	
	printf("Enter a Natural Number from which you what to print :");
	scanf("%d",&b);


	printf("Enter a Natural Number till which you what to print :");//max 296 should be the difference (or out-put screen don't print full); 
	scanf("%d",&a);
	printf("\n\n");
	while (b <= a){
	
	printf ("Count = %d\n",b);
	b++;
	}
	getch();	
	
	return 0;
	
}
