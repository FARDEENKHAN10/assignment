#include<stdio.h>
int main()
{
    char s,str[20];
    printf("enter a string\n");
    fgets(str,20,stdin);
    printf("enter a char for checking occurrence\n");
    scanf("%c",&s);
    int i,j=0;
        for(i=0;str[i];i++){
        if(str[i]==s)
            j++;
    }
    printf("%c is occur %d times in given string",s,j);
    return 0;
}
