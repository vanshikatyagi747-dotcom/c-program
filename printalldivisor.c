/* Write a Program to Print All Divisor of Given Integer */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer\n");
    scanf("%d", &n);
    int i = 1;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            if (n / i != i)
                printf("%d\n", n / i);
        }
        i++;
    }
    return 0;
}