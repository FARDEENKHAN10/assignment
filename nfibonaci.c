#include<stdio.h>
void fib(int n)
{
    int p=1,c=1,i;
    for(i=0;i<n;i++)
    {
        if(i==0||i==1)
            printf("1 ");
        else
        {
            c=p+c;
            p=c-p;
            printf("%d ",c);
        }
    }
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    fib(n);
    return 0;
}
