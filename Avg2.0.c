#include <stdio.h>
#include <conio.h>
int main(){
	float a,b,c,d,avg,sum;
	float z[1000];
	int e,f;
	printf("Enter the amount of Numbers you have :");
	scanf("%d",&f);printf("Enter the Numbers...\n\n");
	for(e=1;e<=f;e++){
		printf ("Entry %d : ",e);
		scanf("%f",&z[e]);printf("\n");
		}for (e=1;e<=f;e++){
			sum=sum+z[e];
			}
			avg=sum/f;
			printf ("\n\n\n\n\n\n\n\n\nThe Average is %f",avg);
			getch();
			return 0;
}			
