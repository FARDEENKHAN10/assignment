#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    int i;
    for(i=1;;i++)
    {
        if((a*i)%a==0&&(a*i)%b==0)
        {
            lcm=a*i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}
