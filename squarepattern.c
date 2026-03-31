/*
Print Square Pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        // while (j <= 5) //Condition to Print Square
        // while (j <= i) //Condition to Print LowerTriangle
        // while (j >= i && j <= 5) // Condition to Print UpperTriangle)
        while (j <= 5)
        {
            if (j < i)
                printf(" ");
            else
                printf("*");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}