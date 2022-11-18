#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][20]={"fardeen","sahil","khan","ali","shab"},user[20];
    printf("enter your name");
    gets(user);
    int i;
    for(i=0;i<5;i++)
    {
        if(strcmp(name[i],user)==0){
            int n,j,sum=1;
            printf("enter a number for factorial");
            scanf("%d",&n);
            for(j=n;j>0;j--)
            {
                sum=sum*j;
            }
            printf("factorial of %d is %d",n,sum);
            break;
        }
    }
    printf("%d",i);
    return 0;
}
