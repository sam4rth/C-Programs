#include <stdio.h>
#include <conio.h>
int main(){
char c[100];
int i;
printf("Enter your name:");
gets(c);//ENTER YOUR NAME
strupr(c);
printf("\n\n");
for (i=0;i<strlen(c);i++){
    if (c[i] == 'A')
        printf("  @@@@@@  \n  @    @  \n  @@@@@@  \n  @    @  \n  @    @  \n\n");
    else if(c[i] == 'B')
        printf("  @@@@@@  \n  @    @  \n  @@@@@   \n  @    @  \n  @@@@@@  \n\n");
    else if (c[i] == 'C')
        printf("  @@@@@@  \n  @       \n  @       \n  @       \n  @@@@@@  \n\n");
    else if (c[i] == 'D')
        printf("  @@@@@   \n  @    @  \n  @    @  \n  @    @  \n  @@@@@   \n\n");
    else if (c[i] ==  'E')
        printf("  @@@@@@  \n  @       \n  @@@@@   \n  @       \n  @@@@@@  \n\n");
    else if (c[i] == 'F')
        printf("  @@@@@@  \n  @       \n  @@@@@   \n  @       \n  @       \n\n");
    else if (c[i] == 'G')
        printf("  @@@@@@  \n  @       \n  @@@@@   \n  @    @  \n  @@@@@   \n\n");
    else if (c[i] == 'H')
        printf("  @    @  \n  @    @  \n  @@@@@@  \n  @    @  \n  @    @  \n\n");
    else if (c[i] == 'I')
        printf("  @@@@@@  \n    @@    \n    @@    \n    @@    \n  @@@@@@  \n\n");
    else if (c[i] == 'J')
        printf("  @@@@@@  \n    @@    \n    @@    \n  @ @@    \n  @@@@    \n\n");
    else if (c[i] == 'K')
        printf("  @   @   \n  @  @    \n  @@      \n  @  @    \n  @   @   \n\n");
    else if (c[i] == 'L')
        printf("  @       \n  @       \n  @       \n  @       \n  @@@@@@  \n\n");
    else if (c[i] == 'M')
        printf("  @    @  \n  @@  @@  \n  @ @@ @  \n  @    @  \n  @    @  \n\n");
    else if (c[i] == 'N')
        printf("  @    @  \n  @@   @  \n  @ @  @  \n  @  @ @  \n  @   @@  \n\n");
    else if (c[i] == 'O')
        printf("  @@@@@@  \n  @    @  \n  @    @  \n  @    @  \n  @@@@@@  \n\n");
    else if (c[i] == 'P')
        printf("  @@@@@@  \n  @    @  \n  @@@@@@  \n  @       \n  @       \n\n");
    else if (c[i] == 'Q')
        printf("  @@@@@@  \n  @    @  \n  @ @  @  \n  @  @ @  \n  @@@@@@  \n\n");
    else if (c[i] == 'R')
        printf("  @@@@@@  \n  @    @  \n  @ @@   \n  @   @   \n  @    @  \n\n");
    else if (c[i] == 'S')
        printf("  @@@@@@  \n  @       \n  @@@@@@  \n       @  \n  @@@@@@  \n\n");
    else if (c[i] == 'T')
        printf("  @@@@@@  \n    @@    \n    @@    \n    @@    \n    @@    \n\n");
    else if (c[i] == 'U')
        printf("  @    @  \n  @    @  \n  @    @  \n  @    @  \n  @@@@@@  \n\n");
    else if (c[i] == 'V')
        printf("  @    @  \n  @    @  \n  @    @  \n   @  @   \n    @@    \n\n");
    else if (c[i] == 'W')
        printf("  @    @  \n  @    @  \n  @ @@ @  \n  @@  @@  \n  @    @  \n\n");
    else if (c[i] == 'X')
        printf("  @    @  \n   @  @   \n    @@    \n   @  @   \n  @    @  \n\n");
    else if (c[i] == 'Y')
        printf("  @    @  \n   @  @   \n    @@    \n    @@    \n    @@    \n\n");
    else if (c[i] == 'Z')
        printf("  @@@@@@  \n      @   \n     @    \n    @     \n  @@@@@@  \n\n");
    else if (c[i] == ' ')
        printf("          \n          \n          \n          \n\n");
    else if (c[i] == ' ')
        printf("----  ----\n\n");
}	
	printf("\n\n\n\n______________________________________");
	printf("\nLike it? Please hit one like!");
	getch();
	return 0;

}
