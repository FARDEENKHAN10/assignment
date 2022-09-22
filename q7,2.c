#include<stdio.h>
int main()
{
    int n,i,p=1,c=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0||i==1)
            printf("1 ");
        else
        {
            c=c+p;
            p=c-p;
            printf("%d ",c);
        }
    }
    return 0;
}
