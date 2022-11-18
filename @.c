#include<stdio.h>
int main()
{
    char email[5][30];
    int i,j;
    printf("enter email addresses");
    for(i=0;i<5;i++)
        gets(email[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;email[i][j];j++){
            if(email[i][j]=='@')
            {
                printf("%s is valid email address\n",email[i]);
                break;
            }
        }
    }
    return 0;
}
