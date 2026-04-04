/* Print the fibonnaci series and the number of terms entered by User */
#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;
    int i = 3;
    while (i <= n)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        i++;
    }
    return 0;
}