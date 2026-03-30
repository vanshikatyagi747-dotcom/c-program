/* find the factorial of an integer entered by user */
#include <stdio.h>
int main()
{
    int result = 1;
    int n;
    printf("Enter an integer\n");
    scanf("%d", &n);
    int i = n;
    while (i > 1)
    {
        result = result * i;
        i--;
        // i=i-1;
    }
    printf("The factorial of %d is %d", n, result);
    return 0;
}