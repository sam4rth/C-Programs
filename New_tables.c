#include <stdio.h>//2.0
#include <conio.h>
#include <stdlib.h>

int main()
{
	int n, i,c;
	
	printf ("Enter an Integer whose table you want :");
	scanf("%d",&n);
	
	printf ("Enter till were you want the tables :");
	scanf("%d",&c);
	
	
	for (i=01; i<=c; ++i)
	{
		printf("\n%d * %d = %d\n",n, i, n*i);
	}
	
	getch();
	
	printf ("\n\nMade on 07-04-19 00:00 by SAMARTH SRIVASTAVA");
	
	getch();
	
	return 0;
}
