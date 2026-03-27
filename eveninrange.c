// Write a program to Count the Even number between the given range
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the min Value of range \n");
    scanf("%d", &x);
    printf("Enter the max Value of range \n");
    scanf("%d", &y);
    int count = 0;
    while (x <= y) // x 12 -----y 20
    {
        if (x % 2 == 0)
            count = count + 1;
        x = x + 1;
    }
    printf("The number of evens between the given range is %d", count);
    printf("\n");
    return 0;
}