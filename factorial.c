#include<stdio.h>
#include<conio.h>

int factorial(int x);

int main(){
	int x;
	printf("Enter the The number:");
	scanf("%d",&x);
	
	printf("\n\nThe Factorial of %d is %d",x,factorial(x));
	
	getch();
	
	return 0;
	
}

int factorial(x){
	
	if (x == 1)
		return(1);
		
	else 
		return(x*factorial(x-1));	
}
