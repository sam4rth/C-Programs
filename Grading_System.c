#include <stdio.h>
#include <conio.h>
//Lok Puram Public School Grading system
// You can edit it for your school
int main()
{
	int marks ;
	printf ("Enter the marks out of 100 :");
	scanf ("%d",&marks);

	if (marks >= 100)
	printf ("\n\nHut Kuch bhi!");//Its impossible
	
	else if (marks >= 91)
	printf ("\n\nA1 ");
	
	else if (marks >=81)
	printf ("\n\nA2 ");
	
	else if (marks >= 71)
	printf ("\n\nB1 ");
	
	else if (marks >= 61)
	printf ("\n\nB2 ");
	
	else if (marks >= 51)
	printf ("\n\nC1 ");
	
	else if (marks >= 41)
	printf ("\n\nC2 ");
	
	else if (marks >= 33)
    printf ("\n\nD ");
	
	else 
	printf("\n\nE\n\nSheeeee! Potty Marks "); 
	
	getch();
	
	return 0;
		
}
