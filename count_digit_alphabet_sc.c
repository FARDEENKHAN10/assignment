#include<stdio.h>
int main()
{
    int i,count_alpha=0,count_digit=0,count_sc=0;
    char str[20];
    printf("enter a string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            count_alpha++;
        else if(str[i]>='0'&&str[i]<='9')
            count_digit++;
        else
            count_sc++;
    }
    printf("Number of alphabet in string is %d\n",count_alpha);
    printf("Number of digit in string is %d\n",count_digit);
    printf("Number of number of special character in string is %d\n",count_sc);
    return 0;
}
