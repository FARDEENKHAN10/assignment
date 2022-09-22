#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
    y=x^1;
    if(y>x)
        printf("even number");
    else
        printf("odd number");
    return 0;
}
