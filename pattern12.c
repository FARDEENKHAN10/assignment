#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<5;i++)
    {
        k=64;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                if(j<=8/2)
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

