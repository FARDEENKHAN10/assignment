#include<stdio.h>
int main()
{
    int i;
    char str[20];
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';++i);
    printf("length is %d",i);
    return 0;
}
