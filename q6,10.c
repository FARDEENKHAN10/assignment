#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0)
    {
        printf("%d",x%10);
        x=x/10;
    }
    return 0;
}
