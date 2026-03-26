/*
Print The Remainder From Integer Enered By User
*/

#include <stdio.h>
int main()
{
    int n, rem;
    printf("Enter An Integer\n");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        printf("%d\n", rem);
        n = n / 10;
    }
    return 0;
}