#include<stdio.h>
#include<string.h>
void palindrome(char str[])
{
    int j=0,i;
    int size=strlen(str)-1;
    printf("%d",size);
    for(i=0;i<=(size/2);i++)
    {
        if(str[i]==str[size-1-i])
            j++;
    }
    if(j==(size/2)+1)
        printf("string is palindrome");
    else
        printf("string is not palindrome");
}
int main()
{
    char str[20];
    printf("enter a string");
    fgets(str,20,stdin);
    palindrome(str);
    return 0;
}
