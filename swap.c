#include<stdio.h>
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a,b;
    a=3;
    b=5;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
