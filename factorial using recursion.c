#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    if (num==0||num==1)
    {
        return 1;
    }

else
{
    return num*factorial(num-1);
}
}
int main()
{
int a;
    printf("enter the number of factorial is:");
    scanf("%d",&a);
    printf("factorial of %d=%d\n",a,factorial(a));

    return 0;
}
