#include<stdio.h>
int main()
{
    char a;
    printf("enter a alphabet");
    scanf("%c",&a);
    if(a>=65&&a<=90)
        printf("uppercase");
    else
        printf("lowercase");
    return 0;
}
