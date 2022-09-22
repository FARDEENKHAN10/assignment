#include<stdio.h>
int main()
{
    int a,b,i,j,flag;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
        i=b;
    else
        i=a;
     while(i!=b)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(flag==0)
            printf("%d ",i);
        i++;
    }
    return i;
}
