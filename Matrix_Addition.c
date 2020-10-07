#include <stdio.h>
#include <conio.h>

int main(){
	
	int a[3][3] ;
	int b[3][3] ;
	int z[3][3] ;
	int c,d,e,f,h=1,i=1,j=1,k=1;
	
	
	printf("Enter the number first matrix :\n");
	for (c=0;c<=2;c++){
		for (d=0;d<=2;d++){
		

			printf("\nEnter column %d Row %d :",k,j);
			j++;
		

		scanf("%d",&a[c][d]);
		}
		k++;
	}	
	
	
		printf("\n\nEnter the Second matrix :\n");
		
	for (e==0;e<=2;e++){
	
		for (f=0;f<=2;f++){
			
			printf("\nEnter column %d Row %d :",i,h);
			h++;
		scanf("%d",&b[e][f]);
		}
		i++;
    }
		
		
    printf("\n\nAnswer:\n\n");
	for (e=0;e<=2;e++){
	
		for (f=0;f<=2;f++){
		 
		 z[e][f]=a[e][f]+b[e][f];
		 
		 printf("%d ",z[e][f]);
		

		}
	
		printf("\n");	
	}
	
	
	
					
		getch();
		
		
}
