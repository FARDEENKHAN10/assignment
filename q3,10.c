#include<stdio.h>
int main()
{
    int c,s;
    printf("enter cost and selling price");
    scanf("%d%d",&c,&s);
    int p=((s-c)/c)*100;
    int l=((c-s)*100)/c;
    if(s>c)
        printf("profit percentage is %d",p);
    else
        printf("loss percentage is %d",l);
    return 0;
}
