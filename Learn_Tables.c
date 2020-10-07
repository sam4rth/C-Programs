#include <stdio.h>
#include <conio.h>

int main() {
    int i, j;
    int table;
    int max = 10;
  	printf ("Enter till which table you want :");//TILL 27 only or else does not fit in output screen 
  	scanf("%d",&table);
  
  
    for (i = 1; i <= table; i++)/*for tables 1 to 'tables'*/ {
        for (j=1; j <= max; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n"); // blank line between tables
    }
    
    getch();
	
	return 0;
}
//1.0 made on 07-04-19 00:14
