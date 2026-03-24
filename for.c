#include <stdio.h>
int main()
{
    // int x = 1;
    // for (initialization;condition;updation)
    for (int x = 1; x <= 10; x = x + 1)
    {
        printf("%d \n", x);
    }
    // it gives Compile time error to that x is undefined here
    //  because the we access the x is out of scope here
    //  printf("%d", x);
    return 0;
}