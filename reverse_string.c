#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],c;
    int i,j;
    printf("enter a string");
    fgets(str,20,stdin);
    i=strlen(str);
    for(j=0;j<i/2;j++){
        c=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=c;
    }
    printf("%s",str);
    return 0;
}
