#include<stdio.h>
void nprime(int n)
{
    int i,j,flag,k=0;
    for(i=1;k<n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(flag==0){
            printf("%d ",i);
            k++;
        }
    }
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    nprime(n);
    return 0;
}
