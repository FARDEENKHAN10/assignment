#include<stdio.h>
void natural(int n)
{
    if(n>0){
        natural(n-1);
        printf("%d ",n*n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    natural(n);
    return 0;
}
