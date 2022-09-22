#include<stdio.h>
int main()
{
    int i,x,flag=0;
    printf("enter a number");
    scanf("%d",&x);
    if(x==0||x==1)
        flag=1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        flag=1;
    }
    if(flag==0)
        printf("%d is prime number",x);
    else
        printf("%d is not a prime number",x);
    return 0;
}
