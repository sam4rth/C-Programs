#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	
	printf ("Enter an Integer :");
	
	scanf("%d",&n);
	
	system("clear");
	
	for (i=01; i<=10; ++i)
	{
		printf("\n%d * %d = %d\n",n, i, n*i);
	}
	
	
	getch();
	
	return 0;
}
