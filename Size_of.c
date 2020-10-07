#include <stdio.h>
#include <conio.h>
int main() {
    printf("int: %d \n", sizeof(int[2]));
    printf("float: %d \n", sizeof(float));
    printf("double: %d \n", sizeof(double));
    printf("char: %d \n", sizeof(char[10]));
    
    getch(); 
     
    return 0;
}
