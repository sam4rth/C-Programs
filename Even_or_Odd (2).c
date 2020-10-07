#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[10],b,c,d;
	
	printf("Enter 10 Numbers(seprate them with Enter):");
	
	for(b=0;b<=9;b++){
		
	  scanf("%d",&a[b]);
	}
		
	for(c=0;c<=9;c++){
		d=a[c]%2;
	
	
	if(d==0)
		printf("\n%d is even ",a[c]);
		
	else
		printf("\n%d is Odd",a[c]);
		getch();
   }
	
	
	getch();
	
	return 0;
	
}
