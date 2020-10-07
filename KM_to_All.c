#include <stdio.h>
#include <conio.h>

int main()
{
	
	float km;
	
	printf("Enter the Distence in KM :");
	
	scanf("%f",&km);
	
	double nanom =1000000000000.0*km;
	
	double microm=1000000000.0*km;
	
	double mim=1000000.0*km;
	
	float cm     =100000.0*km;
	
	float dm     =10000.0*km;
	
	float m      =1000.0*km;
	
	float decam  =100.0*km;
	
	float inch   =39370.079*km;
	
	float foot   =3280.84*km;
	
	float yard   =1093.61*km;
	
	float miles  =0.62/km;
	
	float nmile  =0.54/km;






	
	
	printf("\n\nNanometer :%f",nanom);
	
	getch();
	
	printf("\n\nMicrometer :%f",microm);
	
	getch();
	
	printf("\n\nMillimeter :%f",mim);
	
	getch();
	
	printf("\n\nCentimeter :%f",cm);
	
	getch();
	
	printf("\n\nDecimeter :%f",dm);
	
	getch();
	
	printf("\n\nMeter :%f",m);
	
	getch();
	
	printf("\n\nDecameter :%f",decam);
	
	getch();
	
	printf("\n\nInch :%f",inch);
	
	getch();
	
	printf("\n\nFoot :%f",foot);
	
	getch();
	
	printf("\n\nYard :%f",yard);
	
	getch();
	
	printf("\n\nMile :%f",miles);
	
	getch();
	
	printf("\n\nNautical Mile :%f",nmile);


	
	getch ();
	
	return 0;
	
	
	
}
