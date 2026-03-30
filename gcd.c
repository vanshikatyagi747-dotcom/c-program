/* Print The Highest Common factor Of Two Integer */
#include <stdio.h>
int main()
{
    int n1, n2, i, hcf;
    printf("Enter two integers\n");
    scanf("%d %d", &n1, &n2);
    // Find The Minimum value and Assign into the i
    if (n1 > n2)
    {
        i = n2;
    }
    else
    {
        i = n1;
    }
    while (i >= 1)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
            break;
        }
        i--;
    }
    printf("The HCF of %d and %d is %d", n1, n2, hcf);
    return 0;
}