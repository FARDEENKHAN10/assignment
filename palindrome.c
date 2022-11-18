#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][10];
    int i,j,size,k;
    printf("enter a string");
    for(i=0;i<3;i++)
        gets(s[i]);
    for(i=0;i<3;i++)
    {
        size=strlen(s[i]);
        k=0;
        for(j=0;j<size/2;j++)
        {
            if(s[i][j]==s[i][size-j-1]);
            else{
                k++;
                break;
            }
        }
        if(k==0)
            printf("%s is palindrome\n",s[i]);
    }
    return 0;
}
