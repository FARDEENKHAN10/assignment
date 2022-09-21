#include<stdio.h>
int main()
{
    int a,b,i,flag=0,x,yc;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(i=2;i<a;i++){
            x=a%i;
            y=b%i;
        if(x==0&&y==0)
            flag=1;
    }
    if(flag==0)
        printf("%d and %d are coprime number",a,b);
    else
         printf("%d and %d are not coprime number",a,b);
}
