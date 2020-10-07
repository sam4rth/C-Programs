#include <stdio.h>//this line includes the header file stdio.h 
#include <conio.h>//this line includes the header file conio.h 
int main()//this line creats a main function
{
	
	int a,b,c;//creats 3 vriables
	
	printf("Enter the Number :");//prints the text "Enter the Number :"
	
	scanf("%d",&a);//after printing text askes for input the is then stored in the veriabke 'a'
	
	for(b=0;b>-1;b++)//starts a for loop which is a infinit loop
	{
	
		c = b*b;//the value of b is increased every time the loop is working and its square is stored in the variable c
	
		if (c==a)//if the value is stored in c matched to the value stored in a, then the square root of user input is b 
		{
	
			printf("\n\n\nThe Squre root of %d is %d",a,b);//this line prints the massage (after leaving 3 lines) that the squre root of a is b
	
			getch();//this line stops the screen (works only when inclued <conio.h>)
	
			break;//this line ends the LOOP
		}
	
		if(c>a)//If the value stored in 'c' is greater than 'a' then the user input is not a perfect squre 
		{
	
			printf("\n\n\nThe number is not a perfect square!");//this line of code leaves 3 lines and prints the message "The number is not a perfect square!"
	
			getch();//this line stops the screen (works only when inclued <conio.h>)
	
			break;//this line ends the LOOP
		}
	}
	return 0;//this line retuns the value 0 to the main function
}
 
//Made by Samarth Srivastava 
