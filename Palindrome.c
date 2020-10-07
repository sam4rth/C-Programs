#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//Palindrome is a word that is the same after spelling the word from last to first... 
//EG : WOW = WOW 
//MOM = MOM
// And so on...
int palindrome(char *str){
	
	int a;
	char z[100];
	char y[100];
	
	printf("Enter the Word :");
	gets(z);
	
	strupr(z);
	strcpy(y,z);
	strrev(z);
	
	a = strcmp(z,y);
	
	if (a==0)
		return 1;
	else 
		return 0;

	
}

#ifndef hello
int main (){
	
	char *str = "Deleveled";
	
	system("cls");

    if (palindrome(str)==1)
    	printf("\n\nThe word is palindrome");
    else 
    	printf("\n\nThe word is not palindrome");
    	
	
	
	getch();
}
#endif
