#include <stdio.h>

int main()
{
    int i,n,p;
    printf("enter a number to factorial\n");
    scanf("%d",&n);
    p=1;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    printf("the factorial is %d",p);
    return 0;
}
