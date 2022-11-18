#include<stdio.h>
int main()
{
    char str[4][20];
    int i,j;
    printf("enter city name");
    for(i=0;i<4;i++)
        gets(str[i]);
    for(i=0;i<4;i++)
    {
        if(strcmp(str[i],"puna")==0)
            printf("string found");
    }
    return 0;
}
