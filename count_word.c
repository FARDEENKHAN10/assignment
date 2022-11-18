#include<stdio.h>
int count_words(char str[])
{
    int i,j=1;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
            j++;
    }
    return j;
}
void main()
{
    char str[100];
    printf("enter a string");
    fgets(str,100,stdin);
    int s=count_words(str);
    printf("%d",s);
}
