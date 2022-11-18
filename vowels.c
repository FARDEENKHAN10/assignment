#include<stdio.h>
int main()
{
    char str[20];
    printf("enter a string");
    fgets(str,20,stdin);
    int i,j=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
            j++;
    }
    printf("total vowels in given string is %d",j);
    return 0;
}
