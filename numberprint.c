#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    printf("enter the numbers:");
    scanf("%d",&k);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
    return 0;
}
