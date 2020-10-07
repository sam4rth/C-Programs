#include <stdio.h>
#include <conio.h>
#include <string.h>//use of strings functions

int main()
{
	char a[8] ="Samarth";
	char b[8] =" Alok ";
	char c[12] ="Srivastava";
	char d[100];
	char e[100];
	
	
	
	
	strcat(a,b);
	
	strcat(a,c);
	
	strcpy(d,a);
	
	printf("Enter My full name (first letters in upper case) :");
	gets(e);
	
	int res = strcmp(a,e);
	if (res==0) 
        printf("Correct"); 
    else 
        printf("No It's not %s, its %s",e,d ); 
	
	printf("\nMy name is %s \n \n",d);
	
	printf("The length of my name is %d letters ",	strlen(d));
	
	strupr(d);
	
	printf("\n\n%s",d);

	strlwr(d);
	printf("\n\n%s",d);
	
	strrev(d);
	strupr(d);
	printf("\n\n%s",d);

	getch();
	
	return 0;
}
/* 	

To safely and conveniently operate with strings, you can use the Standard Library string functions shown below. Don't forget to include <string.h>.
#strlen() - get length of a string //21
#strcat() - merge two strings//13,15
#strcpy() - copy one string to another//17
#strlwr() - convert string to lower case//27
#strupr() - conver string to upper case//23,31
#strrev() - reverse string//30
strcmp() - compare two strings//-

*/
