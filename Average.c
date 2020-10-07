#include <stdio.h>
#include <stdio.h>

int main(){
	
	int a[5],b,avg,sum=0,c=1;
	
	for(b=0;b<=4;b++){
	
		printf("Enter Entry Number %d :",c);
		scanf("%d",&a[b]);
		printf("\n"); c++;
   }
	
	for(b=0;b<=4;b++){
		
		sum=sum+a[b];
	
	}
	
	avg=sum/5;
	
	printf("The average is %d",avg);
	
	getch();
	
	
}
