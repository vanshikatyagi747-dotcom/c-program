#include <stdio.h>
#include <math.h>
int main() {
    int n,i,a,c;
    for(i=1;i<=9;i++)
    {
        printf("%d is a armstrong number.\n",i);
    }
    for(n=10;n<=100;n++)
    {
     c=0;
     a=n;
     while(a!=0)
     {
         a=a/10;
         c++;
     }
     a=n;
     int sum=0;
     while(a!=0)
     {
         int r=a%10;
         sum=sum+pow(r,c);
         a=a/10;
     }
     if(sum==n)
     {
         printf("%d is a armstrong number.\n",n);
     }
    }
    return 0;
}
