#include<stdio.h>
void main()
{
    char *str="fardeen";
    int i,vowels=0,consta=0;
    for(i=0;str[i];i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
            vowels++;
        else
            consta++;
    }
    printf("%d %d",vowels,consta);
}
