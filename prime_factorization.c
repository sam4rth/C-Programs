#include <stdio.h>
#include <stdlib.h>

 int main(){
	int limit;
	printf("Enter the number to prime factorize :");
	scanf("%d",&limit);
	if(limit<2){
		printf("\nPrime factorization of %d is not defined\n\n",limit);
		exit(EXIT_FAILURE);
	}
	printf("\nHere we go...\n\n");
	 int limitclone = limit;
	 int primef[limit/2];
	primef[0]=1;
	 int trrry = 2;
	 int i = 2;
	 int j = 0;
	 int k = 0;
	while(limit != 1){
		while(trrry<=limit){
			i=2;
			j=0;
			while(trrry>i){
		 		if(trrry%i==0){//Check if i is a factor for trrry
						j=1;
					}
				if(j==1){// if i was a factor then trrry is not a prime number, so no need to move on
						break;
					}
				i++;//if it was not then 
			}
			if(j==0&&limit%trrry==0){// if it has no factors and if it is a factor of limit
				printf("%d | %d",trrry,limit);
				primef[k]=trrry;
				printf("\n---------\n");
				limit = limit/trrry;
				trrry = 2;
				break;
				}else{
					trrry++;
				}
		}
		k++;
	}
	if (limit==1){
		printf("1 |  ");
		printf("\n---------\n\n\n\n\n\n");
		for(i=0;i<k;i++){
			if(k-i!=1){
			printf("%d X ",primef[i]);}
			else{
				printf("%d = %d ",primef[i],limitclone);
			}
		}
		
	}
	return limit;
}
