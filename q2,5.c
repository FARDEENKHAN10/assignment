#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("enter a three digit number");
    scanf("%d",&x);
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    printf("sum of three digit number is %d",sum);
    return 0;
}
