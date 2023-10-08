#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;
    int fact=1;
    printf(" factorial of the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
