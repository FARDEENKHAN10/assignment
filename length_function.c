#include<stdio.h>
int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return(i-1);
}
int main()
{
    char s[20];
    printf("enter your name");
    fgets(s,20,stdin);
    int x=length(s);
    printf("%d",x);
    return 0;
}
