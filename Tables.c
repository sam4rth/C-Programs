#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=01; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    getch();
    return 0;
}
