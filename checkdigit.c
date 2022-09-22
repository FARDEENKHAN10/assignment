#include<stdio.h>
int check_digit(int n,int d)
{
    while(n!=0){
        if(n%10==d)
            return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    int n,d;
    printf("enter a number and digit");
    scanf("%d%d",&n,&d);
    int x=check_digit(n,d);
    printf("%d",x);
    return 0;
}
