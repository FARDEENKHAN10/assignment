#include<stdio.h>
void alphanumeric(char str[])
{
    int i,n=0,a=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            n++;
        else
            a++;}
        if(a>=1&&n>=1)
            printf("string is alpha numeric");
        else
            printf("string is not alpha numeric");
}
int main()
{
    char str[20];
    printf("enter a string");
    gets(str);
    alphanumeric(str);
    return 0;
}
