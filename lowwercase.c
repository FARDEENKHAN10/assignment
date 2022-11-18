#include<stdio.h>
int main()
{
    int i;
    char str[20];
    printf("enter a string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+C32;}
    printf("%s",str);
    return 0;
}
