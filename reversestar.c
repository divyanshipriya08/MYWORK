#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, k;
    printf("enter the number of rows:");
    scanf("%d",&k);

    for(i=k;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
