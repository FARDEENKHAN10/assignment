#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        k=64;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                if(j<=10/2)
                    printf("%c",++k);
                else
                    printf("%c",--k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
