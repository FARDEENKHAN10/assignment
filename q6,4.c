#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;
}
