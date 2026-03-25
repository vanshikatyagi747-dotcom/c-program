#include <stdio.h>
int main()
{
    int x = 1;
    int n = 100;
    while (x <= n)
    {
        if (x % 5 == 0)
        {
            printf("%d \n", x);
        }
        x = x + 1;
    }
    return 0;
}