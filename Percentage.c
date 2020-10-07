#include <stdio.h>
#include <conio.h>

void discount(void);
void increase(void);
void simple_percentage(void);
void x_y(void);
void perc_increase_or_decrease(void);

int main(){
	
	int yo;
	
	printf("Select the Operatin to perform\n1 for Discount\n2 for Increase\n3 for Simple Percentage\n4 for X & Y\n5 perc.increase/decrease\n\nEnter :");
	scanf("%1d",&yo);
	printf("\n\n\n--------------------------------------------------------------------------------\n");
	
	if (yo==1)
	discount();
	
	else if (yo==2)
	increase();
	
	else if (yo==3)
	simple_percentage();
	
	else if  (yo==4)
	x_y();
	
	else if (yo==5)
	perc_increase_or_decrease();
	
	else
	printf("Incorrect option Selected \nYou selected =%d",yo);
	
	getch();
	
	return (0);
	
	
}

void discount(){
	
	float i,d,f,dis;
	printf("DISCOUNT\n\n");
	
	printf("Initial Value =");
	scanf("%f",&i);
	printf("Discount =");
	scanf("%f",&d);
	
	dis= (d/100)*i ;
	
	f= i - dis;
	
	printf("\nDiscount =%f",dis);
	
	printf("\n\nFinal value =%f",f);
	
	
}

void increase(){
	
	
	float i,in,f,inc;
	printf("INCREASE\n\n");
	printf("Initial Value =");
	scanf("%f",&i);
	printf("Increse =");
	scanf("%f",&in);
	
	inc= (i/100)*in ;
	
	f= i + inc;
	
	printf("\nDiscount =%f",inc);
	
	printf("\n\nFinal value =%f",f);
	
	
}

void simple_percentage(){
	
	float p,f,v;
	printf("SIMPLE PERCENTAGE\n\n");
	printf("Percent =");
	scanf("%f",&p);
	printf("From =");
	scanf("%f",&f);
	
	v= (p/100)*f ;
	
	
	printf("\n\nValue =%f",v);
	
	
}

void x_y(){
	
	float x,y,p;
	printf("X & Y\n\n");
	
	printf("X =");
	scanf("%f",&x);
	printf("Y =");
	scanf("%f",&y);
	
	p= (x*100)/y ;

	
	printf("\n\nDiscount =%f%%",p);

	
	
}

void perc_increase_or_decrease(){
	
	float f,t,p;
	printf("PERCENTAGE INCREASE/DECREASE\n\n");
	
	printf("From =");
	scanf("%f",&f);
	
	printf("To =");
	scanf("%f",&t);
	
	p=((t*100)/f)-100;
	
	printf("Percentage =%f%%",p);
	
}

//2.0
