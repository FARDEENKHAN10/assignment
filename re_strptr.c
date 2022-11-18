#include<stdio.h>
void main()
{
    char str[]="fardeen",temp,*p=&str;
    int i,n;
    for(i=0;p[i];i++);
    n=i;
    for(i=0;i<n/2;i++)
    {
        temp=p[i];
        p[i]=p[n-1-i];
        p[n-1-i]=temp;
    }
    printf("%s",str);
}
