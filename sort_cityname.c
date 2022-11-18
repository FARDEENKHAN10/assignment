#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],temp;
    int i,j,k;
    printf("enter 10 city name");
    for(i=0;i<5;i++)
        gets(str[i]);
    for(k=0;k<5;k++)
    {
        for(i=0;str[i][j];i++)
        {
            for(j=i+1;str[i][j];j++)
            {
                if(str[k][i]>str[k][j])
                {
                  strcpy(temp,str[k][i]);
                  strcpy(str[k][i],str[k][j]);
                  strcpy(str[k][j],temp);
                }
            }
        }
        printf("%s\n",str[k]);

    }
    }
