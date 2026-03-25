/*Print 10 Numbers from 1 to 10 */
#include <stdio.h>
int main()
{
    // initialization
    int x = 1;
    // condition
    while (x <= 10)
    {
        printf("%d \n", x);
        // updation
        x = x + 1;
    }
    return 0;
}