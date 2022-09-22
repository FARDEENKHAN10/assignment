#include<stdio.h>
int main()
{
    int x,y,i;
    printf("enter a binary number");
    scanf("%d",&x);
    for(i=0;y!=1;i++){
        y =x%10;
        x=x/10;
    }
    printf("%d",i);
    return 0;
}
