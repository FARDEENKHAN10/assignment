#include<stdio.h>
int main()
{
    int x,y,i,s;
    printf("enter a number");
    scanf("%d",&x);
    y=x;
    for(i=0,s=0;y!=0;i++)
    {
        s=s+((y%10)*(y%10)*(y%10));
        y=y/10;
    }
    if(x==s)
        printf("%d is armstrong number",x);
    else
        printf("%d is not a armstrong number",x);
    return 0;

}
