#include <stdio.h>
#include <stdlib.h>


int areaofsquare (int a)
{
    return a*a;
}
int areaofreactangle (int a,int b)
{
    return a*b;
}
int areaofcircle (int a)
{
    return 3.14*a*a;
}
int areaoftriangle(int a,int b)
{
    return 0.5*a*b;
}
int main() {
int num1=8,num2= 16;
    printf("area of square:%d\n",areaofsquare(num1));
    printf("area of reactangle:%d\n",areaofreactangle(num1,num2));
    printf("area of circle:%d\n",areaofcircle(num1));
    printf("area of triangle:%d\n",areaoftriangle(num1,num2));

    return 0;
}
