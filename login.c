#include<stdio.h>
#include<string.h>
int main()
{
    char a[3][2][20]={{"khan","128"},{"fardeen","342"},{"sahil","456"}};
    char name[20],pass[20];
    printf("enter user name and password");
    gets(name);
    gets(pass);
    int i;
    for(i=0;i<3;i++)
    {
        if(strcmp(name,a[i][0])==0&&strcmp(pass,a[i][1])==0)
        {
            printf("login successful !!");
        }
    }
    return 0;
}
