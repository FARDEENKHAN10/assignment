#include<stdio.h>
int main()
{
    int n,i,p=1,c=1;
    printf("enter which position fibonnacii term you want");
    scanf("%d",&n);
    if(n==1||n==2)
        printf("1");
    else
    {
        for(i=3;i<=n;i++)
        {
            c=p+c;
            p=c-p;
        }
        printf("%d",c);
    }
    return 0;

}
