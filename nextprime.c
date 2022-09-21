#include<stdio.h>
int main()
{
    int a ,i,j,flag;
    printf("enter a number");
    scanf("%d",&a);
    for(i=a+1;;i++)
    {
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0)
                flag=1;
        }
        if(flag==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
