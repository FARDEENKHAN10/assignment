#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],temp;
    int i,j;
    printf("enter a string");
    fgets(str,20,stdin);
    for(i=0;i<strlen(str);i++)
    {
        for(j=1+i;j<strlen(str);j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
}
