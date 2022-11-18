#include<stdio.h>
void repeat(char s[])
{
    int i,j;
    char temp;
    for(i=0;s[i];i++){
        temp=s[i];
        for(j=i+1;s[j];j++){
            if(s[i]==s[j]){
                printf("%c",s[i]);
                break;
            }
        }
    }
}
void main()
{
    char str[20];
    printf("enter name");
    gets(str);
    repeat(str);
}
