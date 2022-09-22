#include<stdio.h>
void printodd(int n)
{
    int i;
    for(i=1;i<=n;i+=2)
        printf("%d ",i);
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printodd(n);
    return 0;
}
